@class PKSavingsAccountUserInfo, CNContact;

@interface PKAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) CNContact *creditPrimaryUser;
@property (copy, nonatomic) PKSavingsAccountUserInfo *savingsUserInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
