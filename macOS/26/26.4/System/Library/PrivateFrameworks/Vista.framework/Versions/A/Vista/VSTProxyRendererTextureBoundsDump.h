@class NSArray;

@interface VSTProxyRendererTextureBoundsDump : VSTSplatVersionDump

@property (retain, nonatomic) NSArray *viewSpaceBounds;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
