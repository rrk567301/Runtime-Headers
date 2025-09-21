@class NSString, CKRecordID, NSData, CKRoughlyEquivalentProperties;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, CKRoughlyEquivalent, CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *emailAddress;
@property (copy) CKRecordID *userRecordID;
@property (copy) NSString *phoneNumber;
@property BOOL shouldReportMissingIdentity;
@property (copy) NSData *encryptedPersonalInfo;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lookupInfosWithRecordIDs:(id)a0;
+ (id)lookupInfosWithPhoneNumbers:(id)a0;
+ (void)initialize;
+ (id)lookupInfosWithEmails:(id)a0;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initInternal;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)CKXPCSuitableString;
- (void)_stripPersonalInfo;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithUserRecordID:(id)a0;
- (long long)lookupField;
- (id)lookupValue;

@end
