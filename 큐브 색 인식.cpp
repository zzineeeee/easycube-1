#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"




using namespace cv;
using namespace std;



int main()

{

	Mat img;

	img = imread("output.jpg");

	imshow("output_color", img);

	String color;
		
	//(1,1)
	int intensity_b = img.at<Vec3b>(195, 255)[0]; // blue channel
	int intensity_g = img.at<Vec3b>(195, 255)[1]; // green channel
	int intensity_r = img.at<Vec3b>(195, 255)[2]; // red channel

	printf(" (1,1) 의 RGB값 : %d %d %d \n",intensity_r,intensity_b , intensity_g);
			
	
	//(2,1)
	intensity_b = img.at<Vec3b>(195, 315)[0]; // blue channel
	intensity_g = img.at<Vec3b>(195, 315)[1]; // green channel
	intensity_r = img.at<Vec3b>(195, 315)[2]; // red channel

	printf(" (2,1) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);

	//(3,1)
	intensity_b = img.at<Vec3b>(375, 195)[0]; // blue channel
	intensity_g = img.at<Vec3b>(375, 195)[1]; // green channel
	intensity_r = img.at<Vec3b>(375, 195)[2]; // red channel

	printf(" (3,1) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);


	//(1,2)
	intensity_b = img.at<Vec3b>(255, 255)[0]; // blue channel
	intensity_g = img.at<Vec3b>(255, 255)[1]; // green channel
	intensity_r = img.at<Vec3b>(255, 255)[2]; // red channel

	printf(" (1,2) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);

	//(2,2)
	intensity_b = img.at<Vec3b>(315, 255)[0]; // blue channel
	intensity_g = img.at<Vec3b>(315, 255)[1]; // green channel
	intensity_r = img.at<Vec3b>(315, 255)[2]; // red channel

	printf(" (2,2) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);

	//(3,2)
	intensity_b = img.at<Vec3b>(375, 255)[0]; // blue channel
	intensity_g = img.at<Vec3b>(375, 255)[1]; // green channel
	intensity_r = img.at<Vec3b>(375, 255)[2]; // red channel

	printf(" (3,2) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);

	//(1,3)
	intensity_b = img.at<Vec3b>(255, 315)[0]; // blue channel
	intensity_g = img.at<Vec3b>(255, 315)[1]; // green channel
	intensity_r = img.at<Vec3b>(255, 315)[2]; // red channel

	printf(" (1,3) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);

	//(2,3)
	intensity_b = img.at<Vec3b>(315, 315)[0]; // blue channel
	intensity_g = img.at<Vec3b>(315, 315)[1]; // green channel
	intensity_r = img.at<Vec3b>(315, 315)[2]; // red channel

	printf(" (2,3) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);

	//(3,3)
	intensity_b = img.at<Vec3b>(375, 315)[0]; // blue channel
	intensity_g = img.at<Vec3b>(375, 315)[1]; // green channel
	intensity_r = img.at<Vec3b>(375, 315)[2]; // red channel

	printf(" (3,3) 의 RGB값 : %d %d %d \n", intensity_r, intensity_b, intensity_g);

	
	waitKey(0);

	return 0;

}