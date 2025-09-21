@class NSString, NSUUID, NSData, NSNumber;
@protocol AAInheritanceContactInfo;

@interface AALocalContactInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSNumber *familyDSID;
@property (readonly, nonatomic) NSString *familyMemberType;
@property (readonly, nonatomic) BOOL isChild;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSData *imageDataFull;
@property (nonatomic) long long contactType;
@property (copy, nonatomic) NSUUID *custodianID;
@property (nonatomic) long long trustedContactStatus;
@property (nonatomic) BOOL isAcceptedAndShared;
@property (nonatomic) BOOL isIdMSConfirmed;
@property (nonatomic) long long preflightStatus;
@property (retain, nonatomic) id<AAInheritanceContactInfo> inheritanceContactInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_detailsTextForContactType;
- (id)_fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (BOOL)_isEqualToLocalContact:(id)a0;
- (id)detailsText;
- (id)firstNameOrHandleForDisplay;
- (id)initWithFamilyDSID:(id)a0 firstName:(id)a1 lastName:(id)a2 fullName:(id)a3 appleID:(id)a4 familyMemberType:(id)a5 isChild:(BOOL)a6;
- (id)initWithHandle:(id)a0 contact:(id)a1;
- (id)initWithHandle:(id)a0 firstName:(id)a1 lastName:(id)a2;
- (BOOL)isFamilyMember;

@end
