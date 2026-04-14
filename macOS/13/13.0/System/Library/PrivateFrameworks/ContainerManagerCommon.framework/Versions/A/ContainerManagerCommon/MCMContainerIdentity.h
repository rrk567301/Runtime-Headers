@interface MCMContainerIdentity : MCMContainerIdentityMinimal

@property (readonly, nonatomic) BOOL transient;

+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 transient:(BOOL)a4 error:(unsigned long long *)a5;
+ (id)containerIdentityWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 error:(unsigned long long *)a4;
+ (id)containerIdentityWithIdentifier:(id)a0 containerClass:(unsigned long long)a1 platform:(unsigned int)a2 error:(unsigned long long *)a3;
+ (id)containerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithMinimalContainerIdentity:(id)a0 transient:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)plist;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithVersion1PlistDictionary:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (id)initWithUserIdentity:(id)a0 identifier:(id)a1 containerClass:(unsigned long long)a2 platform:(unsigned int)a3 transient:(BOOL)a4 error:(unsigned long long *)a5;
- (id)transientContainerIdentity;
- (id)nontransientContainerIdentity;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)containerIdentity;
- (BOOL)isEqualToContainerIdentity:(id)a0;

@end
