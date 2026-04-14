@class PKAccountBeneficiaryInfo, CNContact;

@interface PKSavingsAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CNContact *primaryUser;
@property (copy, nonatomic) PKAccountBeneficiaryInfo *beneficiaryInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
