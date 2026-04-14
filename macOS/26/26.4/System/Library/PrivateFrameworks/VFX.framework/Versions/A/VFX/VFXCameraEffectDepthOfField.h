@interface VFXCameraEffectDepthOfField : VFXCameraEffect {
    long long _quality;
    BOOL _showCircleOfConfusion;
    long long _mode;
    float _fStop;
    float _inFocusDistance;
    float _outOfFocusDistance;
    float _maximumBlurRadius;
}

@property (nonatomic) long long quality;
@property (nonatomic) BOOL showCircleOfConfusion;
@property (nonatomic) long long mode;
@property (nonatomic) float fStop;
@property (nonatomic) float inFocusDistance;
@property (nonatomic) float outOfFocusDistance;
@property (nonatomic) float maximumBlurRadius;

+ (BOOL)supportsSecureCoding;
+ (id)depthOfField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)createCFXObject;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (struct __CFXCameraEffectDepthOfField { } *)cfxObject;

@end
