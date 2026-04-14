@interface VSTSplatProxyRendererViewInfoDump : VSTSplatVersionDump

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } viewToWorld;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } projection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
