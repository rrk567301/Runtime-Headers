@class NSUUID;

@interface _COClusterRealmHome : COClusterRealm

@property (readonly, copy, nonatomic) NSUUID *specificHomeUUID;

+ (BOOL)supportsSecureCoding;
+ (id)realmWithHomeKitHomeIdentifier:(id)a0;
+ (id)realmForCurrent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)activate:(id /* block */)a0;
- (id)_identifierForGroupResult:(id)a0;
- (id)_initWithPredicate:(id)a0 forHome:(id)a1;

@end
