@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery

@property (readonly, nonatomic) unsigned int plistFlags;
@property (readonly, nonatomic) unsigned long long bundleFlags;

+ (BOOL)supportsSecureCoding;
+ (id)queryWithPlistFlags:(unsigned int)a0 bundleFlags:(unsigned long long)a1;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;

@end
