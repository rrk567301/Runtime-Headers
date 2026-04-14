@class NSString;

@interface REMFamilyChecklistDataViewInvocation_fetchFamilyGroceryListEligibility : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localeIdentifier;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithLocaleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
