/*#include <iostream>  
#include <string> 
#include <opencv2/opencv.hpp>


using namespace cv;
using namespace std;



int main()
{

	int index = 0;
	char buf[256];

	Mat frame;

	VideoCapture videoCapture(0);
	if (!videoCapture.isOpened())
	{
		printf("첫번째 카메라를 열수 없습니다. \n");
	}
	

	while (1)
	{
		
		videoCapture.read(frame);
		
		rectangle(frame, Point(240, 180), Point(270, 210), Scalar(255, 0, 0), 3, 8, 0);
		rectangle(frame, Point(300, 180), Point(330, 210), Scalar(255, 0, 0), 3, 8, 0);
		rectangle(frame, Point(360, 180), Point(390, 210), Scalar(255, 0, 0), 3, 8, 0);

		rectangle(frame, Point(240, 240), Point(270, 270), Scalar(255, 0, 0), 3, 8, 0);
		rectangle(frame, Point(300, 240), Point(330, 270), Scalar(255, 0, 0), 3, 8, 0);
		rectangle(frame, Point(360, 240), Point(390, 270), Scalar(255, 0, 0), 3, 8, 0);

		rectangle(frame, Point(240, 300), Point(270, 330), Scalar(255, 0, 0), 3, 8, 0);
		rectangle(frame, Point(300, 300), Point(330, 330), Scalar(255, 0, 0), 3, 8, 0);
		rectangle(frame, Point(360, 300), Point(390, 330), Scalar(255, 0, 0), 3, 8, 0);
		

		//화면에 보여줌
		imshow("웹캠 영상", frame);
		

		//이미지로 저장  

		char c = waitKey(10);

		if (c == 32)// space bar 누를 때
		{
			sprintf_s(buf, "output.jpg", index);
			cout << buf << endl;
			imwrite(buf, frame);

			Mat img;

			if (img.empty()) {
				cerr << "Image load failed!" << endl;
				return -1;
			}

			index++;
			if (index == 999999) index = 0;



		}
		else if (c == 27) //ESC 키 누를 때 까지 대기
			break;



	}//while

	return 0;

	} 
	*/