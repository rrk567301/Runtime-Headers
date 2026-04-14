@interface VSTSplatProxyRendererFrameStatsDump : VSTSplatVersionDump

@property (nonatomic) unsigned long long numActiveGaussianSplats;
@property (nonatomic) unsigned long long numVisibleSplats;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
