@class PKAccountBeneficiaryInfo, CNContact;

@interface PKSavingsAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CNContact *primaryUser;
@property (copy, nonatomic) PKAccountBeneficiaryInfo *beneficiaryInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
