@interface VSTProxyRendererBoxDump : VSTSplatVersionDump

@property (nonatomic) void /* unknown type, empty encoding */ min;
@property (nonatomic) void /* unknown type, empty encoding */ max;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
