@class NSString, CKRecordID, NSData, CKRoughlyEquivalentProperties;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, CKRoughlyEquivalent, CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *emailAddress;
@property (copy) CKRecordID *userRecordID;
@property (copy) NSString *phoneNumber;
@property char shouldReportMissingIdentity;
@property (copy) NSData *encryptedPersonalInfo;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)lookupInfosWithEmails:(id)a0;
+ (id)lookupInfosWithPhoneNumbers:(id)a0;
+ (id)lookupInfosWithRecordIDs:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)CKPropertiesDescription;
- (id)CKXPCSuitableString;
- (void)_stripPersonalInfo;
- (id)ckShortDescription;
- (id)initInternal;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithUserRecordID:(id)a0;
- (long long)lookupField;
- (id)lookupValue;

@end
