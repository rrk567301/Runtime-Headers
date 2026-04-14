@interface QCPixelFormat_M_If : QCPixelFormat {
    unsigned long long _compatibilities;
}

- (id)name;
- (id)description;
- (unsigned int)openGLPixelFormat;
- (int)pixelType;
- (unsigned long long)compatibilities;
- (int)pixelColorModel;
- (int)pixelAlpha;
- (unsigned long long)pixelBlockWidth;
- (unsigned long long)pixelBlockHeight;
- (unsigned long long)bitsPerBlock;
- (unsigned int)QTPixelFormat;
- (unsigned int)openGLInternalFormat;
- (unsigned int)openGLPixelType;
- (int)CIFormat;
- (struct _cl_image_format { unsigned int x0; unsigned int x1; })CLFormat;
- (unsigned long long)CGBitsPerComponent;
- (unsigned long long)CGBitsPerPixel;
- (unsigned int)CGBitmapInfo;
- (BOOL)isSupportedOnContext:(id)a0;

@end
