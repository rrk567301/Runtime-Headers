@class NSString;

@interface _COClusterRealmExplicitMembership : COClusterRealm

@property (readonly, copy, nonatomic) NSString *clusterIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)realmWithClusterIdentifier:(id)a0;

- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)activate:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_identifierForGroupResult:(id)a0;
- (id)_initWithClusterIdentifier:(id)a0;

@end
