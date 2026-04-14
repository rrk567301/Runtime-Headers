@interface _LSApplicationProxiesOfTypeQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned long long type;

+ (id)queryWithType:(unsigned long long)a0;
+ (BOOL)supportsSecureCoding;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;

@end
