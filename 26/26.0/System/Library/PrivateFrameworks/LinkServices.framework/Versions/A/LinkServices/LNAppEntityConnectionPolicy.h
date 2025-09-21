@class NSString, LNEffectiveBundleIdentifier;

@interface LNAppEntityConnectionPolicy : NSObject

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *processInstanceIdentifier;
@property (readonly, nonatomic) NSString *appEntityIdentifier;
@property (readonly, nonatomic) NSString *appEntityMangledTypeName;
@property (readonly, nonatomic) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)connectionWithError:(id *)a0;
- (id)connectionWithUserIdentity:(id)a0 error:(id *)a1;
- (id)initWithAppEntityIdentifier:(id)a0 appEntityMangledTypeName:(id)a1 effectiveBundleIdentifier:(id)a2 appBundleIdentifier:(id)a3 processInstanceIdentifier:(id)a4;

@end
