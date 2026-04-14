@interface VSTProxyRendererRasterizationRateConeInfoDump : VSTSplatVersionDump

@property (nonatomic) void /* unknown type, empty encoding */ origin;
@property (nonatomic) void /* unknown type, empty encoding */ direction;
@property (nonatomic) float angle;
@property (nonatomic) float rasterizationRate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
