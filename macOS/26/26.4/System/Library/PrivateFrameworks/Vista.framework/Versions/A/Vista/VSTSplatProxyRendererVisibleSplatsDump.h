@class NSData;

@interface VSTSplatProxyRendererVisibleSplatsDump : VSTSplatVersionDump

@property (retain, nonatomic) NSData *visibleSplatIndicesBuffer;
@property (retain, nonatomic) NSData *maxVisibilityContributionBuffer;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;
- (id)initWithVisibleSplats:(const struct VisibleSplats { id x0; id x1; } *)a0 isSurfaceBackedBuffer:(BOOL)a1;

@end
