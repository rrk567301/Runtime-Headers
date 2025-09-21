@class NSUUID, NSString;

@interface AAInheritanceInvitation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (readonly, copy, nonatomic) NSString *beneficiaryHandle;
@property (readonly, copy, nonatomic) NSString *beneficiaryFirstName;
@property (readonly, copy, nonatomic) NSString *beneficiaryLastName;
@property (readonly, copy, nonatomic) NSString *beneficiaryDisplayName;
@property (readonly, nonatomic) long long status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_statusDescription;
- (id)initWithBeneficiaryID:(id)a0 beneficiaryHandle:(id)a1;
- (id)initWithBeneficiaryID:(id)a0 beneficiaryHandle:(id)a1 beneficiaryFirstName:(id)a2 beneficiaryLastName:(id)a3 beneficiaryDisplayName:(id)a4 status:(long long)a5;

@end
