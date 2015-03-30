// Copyright (c) 2015 <Cody W. Eilar>
#include "evenly_divide.h" // NOLINT
#include <opencv2/imgcodecs.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vector>
#include "gtest/gtest.h"

TEST(EvenlyDivide, Constructor) {
  EvenlyDivide ed;
  ASSERT_FALSE(&ed == NULL);
}

TEST(EvenlyDivide, NumberDivisions) {
  EvenlyDivide ed;
  int const expected_div = 4;
  ed.SetNumDivisions(expected_div);
  ASSERT_EQ(expected_div, ed.GetNumDivisions());
}

TEST(EvenlyDivide, InvalidVideoCapture) {
  cv::VideoCapture vc;
  std::vector<int> idx;
  EvenlyDivide ed;
  int const expected_divs = 4;
  ed.SetNumDivisions(expected_divs);
  ASSERT_THROW(ed.SegmentVideo(&vc, &idx), std::runtime_error);
}
