@class IOSurface;

@interface VSTSplatProxyRendererRenderTargetDump : VSTSplatVersionDump

@property (retain, nonatomic) IOSurface *colorTexture;
@property (retain, nonatomic) IOSurface *gridDepthTexture;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
