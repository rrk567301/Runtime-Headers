@interface NETransparentProxyProviderProtocol : NETunnelProviderProtocol

@property unsigned long long order;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithPluginType:(id)a0;
- (id)initWithCoder:(id)a0;

@end
