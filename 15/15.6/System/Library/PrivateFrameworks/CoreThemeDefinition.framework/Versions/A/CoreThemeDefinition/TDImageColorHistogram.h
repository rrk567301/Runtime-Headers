@interface TDImageColorHistogram : NSObject {
    struct _histogram_ARGB_t { unsigned long long tbl[4][1024]; } _histogram;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _imageBuffer;
    struct vImage_CGImageFormat { unsigned int bitsPerComponent; unsigned int bitsPerPixel; struct CGColorSpace *colorSpace; unsigned int bitmapInfo; unsigned int version; double *decode; int renderingIntent; } _imageFormat;
    char _isMonochrome;
}

@property (readonly) char isMonochrome;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (double)intersection:(id)a0;

@end
