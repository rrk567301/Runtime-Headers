@class NSUUID;

@interface _COClusterRealmHome : COClusterRealm

@property (readonly, copy, nonatomic) NSUUID *specificHomeUUID;

+ (BOOL)supportsSecureCoding;
+ (id)realmForCurrent;
+ (id)realmWithHomeKitHomeIdentifier:(id)a0;

- (void)activate:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_identifierForGroupResult:(id)a0;
- (id)_initWithPredicate:(id)a0 forHome:(id)a1;

@end
