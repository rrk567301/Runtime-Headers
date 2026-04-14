@interface VSTProxyRendererRasterizationRateBoxInfoDump : VSTSplatVersionDump

@property (nonatomic) void /* unknown type, empty encoding */ boxMin;
@property (nonatomic) void /* unknown type, empty encoding */ boxMax;
@property (nonatomic) float rasterizationRate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
