@interface VSTSplatProxyRendererCreateOptionsDump : VSTSplatVersionDump

@property (nonatomic) int packingMethod;
@property (nonatomic) unsigned long long numBatches;
@property (nonatomic) BOOL createIOSurfaceBackedResources;
@property (nonatomic) BOOL reduceTileRenderingRegion;
@property (nonatomic) BOOL useVertexAmplification;
@property (nonatomic) BOOL useEarlyZTesting;
@property (nonatomic) BOOL useOverdrawLimit;
@property (nonatomic) BOOL recordMaxVisibilityContribution;
@property (nonatomic) BOOL renderBack;
@property (nonatomic) BOOL generateProxyMesh;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;
- (struct CreateOptions { int x0; int x1; unsigned long long x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })makeBaseRendererOptions;
- (struct CreateOptions { BOOL x0; })makeProxyRendererOptions;

@end
