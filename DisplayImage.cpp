#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main(void)
{
	Mat img =  imread ("獅子.jpeg",CV_LOAD_IMAGE_UNCHANGED);
	Mat dst;
	threshold(img,dst,100,255,THRESH_BINARY);
	int widthLimit= dst.channels()*dst.cols;
	printf("ACS107128 張云榮 \n");
	for(int height=0; height<dst.rows;height++)
	{
		for(int width=0;width<widthLimit; width++)
		{
			if(dst.at<uchar>(height , width) == 0)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}


	return 0;
}

