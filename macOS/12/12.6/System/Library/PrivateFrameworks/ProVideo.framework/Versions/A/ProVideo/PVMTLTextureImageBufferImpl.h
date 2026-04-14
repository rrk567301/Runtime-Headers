@class NSString;
@protocol MTLTexture;

@interface PVMTLTextureImageBufferImpl : NSObject <PVImageBufferImpl> {
    id<MTLTexture> _mtlTexture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (struct CGImage { } *)cgImage;
- (id)initWithMTLTexture:(id)a0;
- (BOOL)canCreateCVPixelBuffer;
- (BOOL)canCreateHGBitmap;
- (BOOL)cvPixelBufferRequiresCopy;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer *x0; })cvPixelBufferWithColorSpace:(id)a0;
- (struct HGRef<HGBitmap> { struct HGBitmap *x0; })hgBitmapWithColorSpace:(id)a0;

@end
