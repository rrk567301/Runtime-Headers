@class NSData;

@interface PKBitmapContext : NSObject {
    struct vImage_CGImageFormat { unsigned int bitsPerComponent; unsigned int bitsPerPixel; struct CGColorSpace *colorSpace; unsigned int bitmapInfo; unsigned int version; double *decode; int renderingIntent; } _format;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _buffer;
    NSData *_wrappedBuffer;
    struct CGContext { } *_context;
}

+ (id)createWithCGBitmapContext:(struct CGContext { } *)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accessContext:(id /* block */)a0;

@end
