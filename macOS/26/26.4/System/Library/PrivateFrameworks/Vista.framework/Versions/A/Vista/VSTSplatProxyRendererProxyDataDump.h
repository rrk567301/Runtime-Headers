@class NSArray, VSTSplatProxyRendererVisibleSplatsDump;

@interface VSTSplatProxyRendererProxyDataDump : VSTSplatVersionDump

@property (retain, nonatomic) NSArray *stackViews;
@property (retain, nonatomic) VSTSplatProxyRendererVisibleSplatsDump *visibleSplats;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
