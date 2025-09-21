@protocol MTLTexture, MTLSharedEvent;

@interface GTMTLTextureRenderEncoderCommand : NSObject <NSCopying>

@property struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGPoint { double x; double y; } anchor;
@property (retain) id<MTLTexture> texture;
@property (retain) id<MTLSharedEvent> waitEvent;
@property unsigned long long waitEventValue;
@property double contentsScale;
@property unsigned int rgb;
@property BOOL depthStencil;
@property BOOL overlay;
@property BOOL shrinkToFit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
