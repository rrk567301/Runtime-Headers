@interface _LSApplicationProxiesOfTypeQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned long long type;

+ (char)supportsSecureCoding;
+ (id)queryWithType:(unsigned long long)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (char)_requiresDatabaseMappingEntitlement;

@end
