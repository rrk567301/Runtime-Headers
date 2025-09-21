@class NSString, NSUUID, NSData, NSNumber;
@protocol AAInheritanceContactInfo;

@interface AALocalContactInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSNumber *familyDSID;
@property (readonly, nonatomic) NSString *familyMemberType;
@property (readonly, nonatomic) char isChild;
@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) long long contactType;
@property (copy, nonatomic) NSUUID *custodianID;
@property (nonatomic) long long trustedContactStatus;
@property (nonatomic) char isAcceptedAndShared;
@property (nonatomic) char isIdMSConfirmed;
@property (nonatomic) long long preflightStatus;
@property (retain, nonatomic) id<AAInheritanceContactInfo> inheritanceContactInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (id)_detailsTextForContactType;
- (id)_fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (char)_isEqualToLocalContact:(id)a0;
- (id)detailsText;
- (id)firstNameOrHandleForDisplay;
- (id)initWithFamilyDSID:(id)a0 firstName:(id)a1 lastName:(id)a2 fullName:(id)a3 appleID:(id)a4 familyMemberType:(id)a5 isChild:(char)a6;
- (id)initWithHandle:(id)a0 contact:(id)a1;
- (id)initWithHandle:(id)a0 firstName:(id)a1 lastName:(id)a2;
- (char)isFamilyMember;

@end
