@class IOSurface;

@interface VSTSplatProxyRendererProxyBuffersDump : VSTSplatVersionDump

@property (retain, nonatomic) IOSurface *proxyPositionsBuffer;
@property (retain, nonatomic) IOSurface *proxyUVsBuffer;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
