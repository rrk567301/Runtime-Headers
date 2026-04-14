@class NSArray, VSTSplatProxyRendererFrameStatsDump;

@interface VSTSplatProxyRendererLayerDataDump : VSTSplatVersionDump

@property (retain, nonatomic) NSArray *proxies;
@property (retain, nonatomic) VSTSplatProxyRendererFrameStatsDump *stats;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
