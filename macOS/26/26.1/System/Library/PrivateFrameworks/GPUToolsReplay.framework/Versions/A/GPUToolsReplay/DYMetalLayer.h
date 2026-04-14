@protocol MTLDevice;

@interface DYMetalLayer : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) BOOL wantsExtendedDynamicRangeContent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double contentsScale;
@property (nonatomic) struct CGColorSpace { } *colorspace;

- (id)nextDrawable;
- (void).cxx_destruct;
- (id)nextDrawableWithTextureResourceIndex:(unsigned long long)a0;

@end
