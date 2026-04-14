@interface VSTProxyRendererCommandDump : VSTSplatVersionDump

@property (nonatomic) unsigned long long timestamp;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
