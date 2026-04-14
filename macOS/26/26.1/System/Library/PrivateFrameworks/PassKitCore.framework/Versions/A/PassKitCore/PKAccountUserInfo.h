@class PKCreditAccountUserInfo, PKSavingsAccountUserInfo;

@interface PKAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PKCreditAccountUserInfo *creditUserInfo;
@property (copy, nonatomic) PKSavingsAccountUserInfo *savingsUserInfo;

+ (id)_pkRequiredStringFromDictionary:(id)a0 forKey:(id)a1;
+ (id)primaryUserFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
