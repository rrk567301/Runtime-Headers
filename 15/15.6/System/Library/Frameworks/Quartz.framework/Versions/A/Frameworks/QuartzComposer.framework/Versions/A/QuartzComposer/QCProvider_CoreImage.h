@class CIImage, QCRegion, NSArray;

@interface QCProvider_CoreImage : QCImageProvider {
    CIImage *_image;
    QCRegion *_domainOfDefinition;
    NSArray *_pixelFormats;
    NSArray *_textureFormats;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

+ (id)createProviderWithSource:(id)a0 options:(id)a1;
+ (char)isCompatibleWithSource:(id)a0 sourceMD5:(struct { unsigned char x0[16]; } *)a1;

- (void)dealloc;
- (void)finalize;
- (struct CGColorSpace { } *)colorSpace;
- (char)hasAlpha;
- (id)initWithCIImage:(id)a0 options:(id)a1;
- (id)createOptimizedProviderWithTransformation:(id)a0 cropping:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createPixelBufferForManager:(id)a0 withFormat:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)createTextureBufferForManager:(id)a0 withFormat:(id)a1 target:(unsigned int)a2 transformation:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 colorSpace:(struct CGColorSpace { } *)a5 options:(id)a6;
- (id)domainOfDefinition;
- (id)nativePixelFormat;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;
- (id)supportedPixelBufferFormatsForManager:(id)a0;
- (id)supportedTextureBufferFormatsForManager:(id)a0;
- (id)supportedTextureBufferTargetsForManager:(id)a0;
- (char)supportsColorMatching;
- (char)supportsCropping;
- (char)supportsTransformation;

@end
