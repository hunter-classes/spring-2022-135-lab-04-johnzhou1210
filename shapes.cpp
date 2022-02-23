#include <iostream>

std::string box(int width, int height)
{
  std::string result;
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      result += "*";
    }
    result += "\n";
  }
  return result;
}

std::string checkerboard(int width, int height)
{
  std::string result;
  std::string symbol;
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      int pos = x + y;
      if (pos % 2 == 0)
      {
        symbol = "*";
      } else {
        symbol = " ";
      }
      result += symbol;
    }
    result += "\n";
  }
  return result;
}

std::string cross(int size)
{
  std::string result;
  for (int i = 0; i < size; i++)
  {

    for (int j = 0; j < size; j++)
    {
      if (j == i || j == size - i - 1)
      {
        result += "*";
      } else {
        result += " ";
      }
    }
    result += "\n";
  }
  return result;
}

std::string lower(int length)
{
  std::string result;
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      result += "*";
    }
    result += "\n";
  }
  return result;
}

std::string upper(int length)
{
  std::string result;
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length; j++)
    {
      if (j >= i)
      {
        result += "*";
      } else {
        result += " ";
      }
    }
    result += "\n";
  }
  return result;
}

std::string trapezoid(int width, int height)
{
  std::string result;
  // check if it is possible first
  if (width - (2 * (height - 1)) < 1)
  {
    return "Impossible!";
  }
  int spaces = 0;
  int stars = width;
  for (int i = 0; i < height; i++)
  {
    for (int j = 0 ; j < spaces; j++) // spaces
    {
      result += " ";
    }

    for (int k = 0; k < stars; k++) // stars
    {
      result += "*";
    }
    spaces += 1;
    stars -= 2;
    result += "\n";
  }
  return result;
}

std::string generate3x3TileWidthRow(int width, bool shift, int realWidth, int realHeight, bool isFinalIteration)
{
  std::string result;
  // determine how final iteration affects height
  int end = 3;
  if (isFinalIteration && (realHeight % 3 != 0))
  {
    end = realHeight % 3;
  }
  for (int i = 1; i <= end; i++)
  {
    std::string singleRowResult;
    for (int j = 1; j <= width; j++)
    {
      if (j % 2 == 0)
      {
        if (shift)
        {
          singleRowResult += "***";
        } else {
            singleRowResult += "   ";
        }
      } else {
        if (shift)
        {
          singleRowResult += "   ";
        } else {
          singleRowResult += "***";
        }
      }
    }
    // now check to see if width trimming is needed
    int lengthToRemoveOffEnd = (width * 3) - realWidth;
    // std::cout<< "in here. lengthToRemoveOffEnd is " << lengthToRemoveOffEnd << "\n";
    // this integer should be greater than 0. If not, there was a problem somewhere.
    if (lengthToRemoveOffEnd > 0)
    {
      singleRowResult = singleRowResult.substr(0, singleRowResult.length() - lengthToRemoveOffEnd);
    }
    // after adjusted, add to result.
    result += singleRowResult;
    if (i != 3)
    {
      result += "\n";
    }
  }
  // std::cout << "in here\n";
  return result;
}

std::string checkerboard3x3(int width, int height)
{
  std::string subResult, result;
  // first round width and height to the nearest multiple of 3 by adding
  int tempWidth, tempHeight;
  tempWidth = width; tempHeight = height;
  while (tempWidth % 3 != 0)
  {
    tempWidth++;
  }
  while (tempHeight % 3 != 0)
  {
    tempHeight++;
  }
  // std::cout << "(" << tempWidth << ", " << tempHeight << ")\n";
  // now let's dumb it down. if the width after dumbing down is three, that means that the result is 3 tiles long
  tempWidth /= 3; tempHeight /= 3;
  subResult = checkerboard(tempWidth, tempHeight);
  // std::cout << "width parameter was " << tempWidth << " and height parameter was " << tempHeight << ". subresult is " << subResult << std::endl;
  // now magnify
  // we cannot concatenate multiline strings the way we want, so we will generate the string row by row
  bool isFinalIteration = false;
  for (int i = 1; i <= tempHeight; i++) // we use the original height here
  {
    if (i == tempHeight){ isFinalIteration = true; }
    bool needShift = false;
    if (i % 2 == 0)
    {
      needShift = true;
    }
    result += generate3x3TileWidthRow(tempWidth, needShift, width, height, isFinalIteration); // notice that 3rd param is the real width and the 4th param is the real height
    result += "\n";
  }
  // std::cout << "Trimmed resulting string: \n" << result << std::endl;
  return result;
}
