@class CUINamedVectorGlyph;

@interface CUIEncapsulatedVectorGlyph : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _glyph;
    void /* unknown type, empty encoding */ _imageRect;
    void /* unknown type, empty encoding */ _imageCenter;
    void /* unknown type, empty encoding */ _encapsulatedAlignmentRect;
    void /* unknown type, empty encoding */ _coordinateSystem;
    void /* unknown type, empty encoding */ contextTransform;
    void /* unknown type, empty encoding */ useASG;
    void /* unknown type, empty encoding */ canvasSize;
}

@property (nonatomic, readonly) CUINamedVectorGlyph *glyph;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageRect;
@property (nonatomic, readonly) struct CGVector { double x0; double x1; } imageCenter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } encapsulatedAlignmentRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imagePixelRect;
@property (nonatomic, readonly) struct CGVector { double x0; double x1; } imagePixelCenter;
@property (nonatomic, readonly) long long coordinateSystem;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGVector { double x0; double x1; })imageCenterForCoordinateSystem:(long long)a0;
- (struct CGImage { } *)rasterizeImageUsingRenderBlock:(id /* block */)a0;
- (struct CGContext { } *)createContextFor:(id)a0 width:(long long)a1 height:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })encapsulatedAlignmentRectForCoordinateSystem:(long long)a0;
- (struct CGVector { double x0; double x1; })imagePixelCenterForCoordinateSystem:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imagePixelRectForCoordinateSystem:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForCoordinateSystem:(long long)a0;

@end
