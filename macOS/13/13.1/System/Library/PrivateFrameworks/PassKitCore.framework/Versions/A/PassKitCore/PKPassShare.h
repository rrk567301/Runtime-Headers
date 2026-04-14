@class NSString, NSArray, PKPassShareActivationOptions, NSDate, NSUUID;

@interface PKPassShare : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _status;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *senderShareIdentifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned long long manageability;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isRevokable;
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
@property (readonly, nonatomic) BOOL isLocalShare;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)appendCredentialShareDictionary:(id)a0 entitlements:(id)a1;
- (void)addCredentialShare:(id)a0;
- (BOOL)isSameUnderlyingShareAs:(id)a0;
- (void)updateDisplayableSharedEntitlementsFromDisplayableEntitlements:(id)a0;

@end
