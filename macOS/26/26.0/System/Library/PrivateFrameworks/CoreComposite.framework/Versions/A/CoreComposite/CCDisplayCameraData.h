@class NSArray;
@protocol MTLTexture;

@interface CCDisplayCameraData : CCData {
    struct { void /* unknown type, empty encoding */ columns[4]; } _displayToCamera;
    id<MTLTexture> _tanAnglesToCamera;
    id<MTLTexture> _texture;
    struct { void /* unknown type, empty encoding */ vector; } _cameraToTopOfFrame;
    struct { void /* unknown type, empty encoding */ vector; } _cameraToBottomOfFrame;
    NSArray *_pointBasedFeatures;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
