@interface VSTSplatProxyRendererTextureInfoDump : VSTSplatVersionDump

@property (nonatomic) void /* unknown type, empty encoding */ origin;
@property (nonatomic) void /* unknown type, empty encoding */ textureSize;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
