// Copyright (c) 2015 <Cody W. Eilar>
#ifndef SRC_CPP_SEGMENTER_INTERFACE_H_
#define SRC_CPP_SEGMENTER_INTERFACE_H_
#include <opencv2/imgcodecs.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vector>
typedef struct {
  int begin;
  int end;
} Segment;
class SegmenterInterface {
 public:
  virtual ~SegmenterInterface() {}
  virtual void SegmentVideo(cv::VideoCapture *vc,
                            std::vector<size_t> *segments) = 0;
};
#endif  // SRC_CPP_SEGMENTER_INTERFACE_H_
