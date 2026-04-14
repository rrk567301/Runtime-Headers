@class NSString;

@interface PVHGBitmapImageBufferImpl : NSObject <PVImageBufferImpl> {
    struct HGRef<HGBitmap> { struct HGBitmap *m_Obj; } _bitmap;
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
- (id)initWithHGBitmap:(struct HGRef<HGBitmap> { struct HGBitmap *x0; })a0;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)canCreateHGBitmap;
- (BOOL)cvPixelBufferRequiresCopy;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })cvPixelBufferWithColorSpace:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;

@end
