#include <stdio.h>
#include <tesseract/capi.h>

TessBaseAPI *gTesseract;
char gPdfFile[100];

int TCheck()
{
	gTesseract = TessBaseAPICreate();
	if(!gTesseract)
	{
		return -1;
	}
	return 0;
}

int main()
{
	printf("Initializing Tesseract API... \n");
	if(TCheck())
	{
		printf("Unable to Initialize Tesseract API. Exiting! \n");
		return -1;
	}
	gPdfFile[100] = '/0';
	#ifdef _DEBUG
		printf("Opening debug file: %s.. \n", gDebugFile);
		strcpy(gPdfFile, "test.pdf");
	#else
		printf("Type the name of the Syllabus PDF file to process :");
		scanf("%99s", gPdfFile);
	#endif
	printf("Initializing Google Calendar API... \n");
	return 0;
}
