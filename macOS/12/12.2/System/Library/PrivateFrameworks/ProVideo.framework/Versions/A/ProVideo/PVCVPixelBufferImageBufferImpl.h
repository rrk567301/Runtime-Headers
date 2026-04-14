@class NSString;

@interface PVCVPixelBufferImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *m_Obj; } _pixelBuffer;
    struct CGImage { } *_generatedCGImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGImage { } *)cgImage;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })a0;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)canCreateHGBitmap;
- (BOOL)cvPixelBufferRequiresCopy;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })cvPixelBufferWithColorSpace:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;

@end
