#include "CImg.h"
using namespace cimg_library;

int main(){
  CImg<unsigned char> img("kingfisher.bmp");
//  img.display("Hello World!");
  float sigma{1.0};
  CImg<> lum = img.get_norm().blur(sigma).normalize(0,255).display();

  return 0;
}
