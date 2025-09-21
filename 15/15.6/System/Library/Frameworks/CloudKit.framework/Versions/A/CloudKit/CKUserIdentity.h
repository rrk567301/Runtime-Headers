@class CKRecordID, NSArray, NSData, NSString, NSPersonNameComponents, CKUserIdentityLookupInfo;

@interface CKUserIdentity : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy) CKRecordID *userRecordID;
@property char hasiCloudAccount;
@property char isCached;
@property (copy) NSData *publicSharingKey;
@property unsigned long long publicKeyVersion;
@property (copy) NSData *outOfNetworkPrivateKey;
@property (copy) NSData *encryptedPersonalInfo;
@property (copy) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *firstName;
@property (readonly, copy) NSString *lastName;
@property (copy) CKUserIdentityLookupInfo *lookupInfo;
@property (copy) NSPersonNameComponents *nameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initInternal;
- (id)initWithUserRecordID:(id)a0;
- (char)isEquivalentToUserIdentity:(id)a0;
- (char)isEquivalentToUserIdentityOrPublicKey:(id)a0;
- (char)isOutOfNetwork;

@end
