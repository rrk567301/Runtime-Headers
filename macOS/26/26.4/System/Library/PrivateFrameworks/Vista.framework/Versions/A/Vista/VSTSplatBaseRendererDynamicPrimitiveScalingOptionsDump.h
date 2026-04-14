@interface VSTSplatBaseRendererDynamicPrimitiveScalingOptionsDump : VSTSplatVersionDump

@property (nonatomic) void /* unknown type, empty encoding */ gazeOrigin;
@property (nonatomic) void /* unknown type, empty encoding */ gazeDirection;
@property (nonatomic) float falloffStartAngle;
@property (nonatomic) float falloffEndAngle;
@property (nonatomic) float falloffScale;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
