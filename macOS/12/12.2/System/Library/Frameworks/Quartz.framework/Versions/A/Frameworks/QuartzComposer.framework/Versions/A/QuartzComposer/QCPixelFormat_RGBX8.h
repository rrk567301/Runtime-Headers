@interface QCPixelFormat_RGBX8 : QCPixelFormat {
    unsigned long long _compatibilities;
}

- (id)description;
- (id)name;
- (unsigned int)openGLPixelFormat;
- (int)pixelType;
- (unsigned int)CGBitmapInfo;
- (int)pixelColorModel;
- (unsigned long long)CGBitsPerComponent;
- (int)pixelAlpha;
- (unsigned long long)CGBitsPerPixel;
- (unsigned int)openGLInternalFormat;
- (unsigned long long)bitsPerBlock;
- (unsigned int)QTPixelFormat;
- (unsigned int)openGLPixelType;
- (BOOL)isSupportedOnContext:(id)a0;
- (int)CIFormat;
- (unsigned long long)pixelBlockWidth;
- (unsigned long long)pixelBlockHeight;
- (unsigned long long)compatibilities;
- (struct _cl_image_format { unsigned int x0; unsigned int x1; })CLFormat;

@end
