@class NSAffineTransform, QCRegion;
@protocol QCImageProvider;

@interface QCCroppedImageProvider : QCImageProvider {
    id<QCImageProvider> _originalProvider;
    NSAffineTransform *_transformation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _croppingRect;
    QCRegion *_domainOfDefinition;
    void *_unused2[4];
}

- (void)dealloc;
- (struct CGColorSpace { } *)colorSpace;
- (BOOL)hasAlpha;
- (id)transformation;
- (BOOL)supportsCropping;
- (BOOL)supportsTransformation;
- (id)domainOfDefinition;
- (id)supportedPixelBufferFormatsForManager:(id)a0;
- (id)createPixelBufferForManager:(id)a0 withFormat:(id)a1 transformation:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 colorSpace:(struct CGColorSpace { } *)a4 options:(id)a5;
- (id)supportedTextureBufferTargetsForManager:(id)a0;
- (id)supportedTextureBufferFormatsForManager:(id)a0;
- (id)createTextureBufferForManager:(id)a0 withFormat:(id)a1 target:(unsigned int)a2 transformation:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 colorSpace:(struct CGColorSpace { } *)a5 options:(id)a6;
- (BOOL)supportsColorMatching;
- (id)createOptimizedProviderWithTransformation:(id)a0 cropping:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithProvider:(id)a0 transformation:(id)a1 croppingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)originalProvider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })croppingRect;

@end
