@protocol MTLTexture;

@interface CCDisplayDistortionData : CCData {
    id<MTLTexture> _displayToTanAngles;
    id<MTLTexture> _tanAnglesToDisplay;
    id<MTLTexture> _displayVisibilitySDF;
    float _zoomFactor;
    void /* unknown type, empty encoding */ _zoomBoundingBox[4];
    void /* unknown type, empty encoding */ _zoomCenter;
    float _zoomCornerRadius;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
