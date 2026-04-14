@interface VSTSplatProxyRendererLayerQuadDump : VSTSplatVersionDump

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } layerToWorld;
@property (nonatomic) void /* unknown type, empty encoding */ origin;
@property (nonatomic) void /* unknown type, empty encoding */ right;
@property (nonatomic) void /* unknown type, empty encoding */ down;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
