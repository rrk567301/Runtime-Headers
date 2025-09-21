@class NSString, NSArray, PKPassShareActivationOptions, NSDate, NSUUID;

@interface PKPassShare : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _status;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *senderShareIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *senderGroupIdentifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned long long manageability;
@property (readonly, nonatomic) char isEditable;
@property (readonly, nonatomic) char isRevokable;
@property (retain, nonatomic) NSString *recipientNickname;
@property (retain, nonatomic) NSString *recipientHandle;
@property (retain, nonatomic) NSArray *sharedEntitlements;
@property (retain, nonatomic) NSArray *displayableSharedEntitlements;
@property (retain, nonatomic) NSArray *credentialShares;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *subcredentialIdentifier;
@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (readonly, nonatomic) NSUUID *uuidIdentifier;
@property (readonly, nonatomic) unsigned long long mostRestrictiveShareability;
@property (readonly, nonatomic) char isLocalShare;

+ (id)createTaggedShare;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)updateDisplayableSharedEntitlementsFromDisplayableEntitlements:(id)a0;
- (void)addCredentialShare:(id)a0;
- (void)addCredentialShares:(id)a0;
- (char)appendCredentialShareDictionary:(id)a0 entitlements:(id)a1;
- (char)createdByActiveUser;
- (id)descendantsInShares:(id)a0;
- (id)initWithSubcredentialDictionary:(id)a0;
- (char)isParentOfShare:(id)a0;
- (BOOL)isSameUnderlyingShareAs:(id)a0;
- (char)mostRestrictiveIntraAccountSharingEnabled;

@end
