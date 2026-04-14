@class NSString, CKRecordID, NSData;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *emailAddress;
@property (copy) CKRecordID *userRecordID;
@property (copy) NSString *phoneNumber;
@property BOOL shouldReportMissingIdentity;
@property (copy) NSData *encryptedPersonalInfo;

+ (id)lookupInfosWithEmails:(id)a0;
+ (id)lookupInfosWithPhoneNumbers:(id)a0;
+ (id)lookupInfosWithRecordIDs:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKXPCSuitableString;
- (void)_stripPersonalInfo;
- (id)ckShortDescription;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithUserRecordID:(id)a0;
- (long long)lookupField;
- (id)lookupValue;

@end
