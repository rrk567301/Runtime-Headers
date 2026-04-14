@interface VSTSplatProxyRendererSplattingOptionsDump : VSTSplatVersionDump

@property (nonatomic) float fovPixelsPerDegree;
@property (nonatomic) void /* unknown type, empty encoding */ minViewportSize;
@property (nonatomic) void /* unknown type, empty encoding */ maxViewportSize;
@property (nonatomic) int gridTileSize;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
