@interface REMFamilyChecklistFamilyGroceryListEligibility : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isEligible;
@property (readonly, nonatomic) long long ineligibilityReasons;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsEligible:(char)a0 ineligibilityReasons:(long long)a1;

@end
