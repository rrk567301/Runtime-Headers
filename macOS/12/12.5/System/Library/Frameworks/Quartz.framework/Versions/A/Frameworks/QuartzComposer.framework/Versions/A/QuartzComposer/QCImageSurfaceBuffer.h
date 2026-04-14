@interface QCImageSurfaceBuffer : QCImagePixelBuffer {
    struct __IOSurface { } *_surface;
}

- (void)finalize;
- (void)dealloc;
- (unsigned long long)identifier;
- (struct __IOSurface { } *)surface;
- (const void *)baseAddress;
- (BOOL)beginUpdatePixels:(BOOL)a0 colorSpace:(struct CGColorSpace { } *)a1;
- (void *)baseAddressForSkippedRows:(unsigned long long)a0 skippedPixels:(unsigned long long)a1;
- (void)endUpdatePixels;
- (id)initWithFormat:(id)a0 pixelsWide:(unsigned long long)a1 pixelsHigh:(unsigned long long)a2 options:(id)a3;
- (id)initWithBaseAddress:(const void *)a0 format:(id)a1 pixelsWide:(unsigned long long)a2 pixelsHigh:(unsigned long long)a3 options:(id)a4;
- (void)_finalize_QCImageSurfaceBuffer;

@end
