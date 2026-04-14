@class NSSet, NSString, NSDictionary, NSDate, NSMutableSet, ACAccount;

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {
    NSDictionary *_credentialItems;
    NSString *_credentialType;
    NSMutableSet *_dirtyProperties;
    ACAccount *_owningAccount;
}

@property (class, readonly, copy) NSSet *allSupportedKeys;
@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL requiresTouchID;
@property (copy) NSString *token;
@property (copy) NSString *oauthTokenSecret;
@property (copy) NSString *password;
@property (copy, nonatomic) NSString *credentialType;
@property (readonly, nonatomic) NSSet *dirtyProperties;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (copy, nonatomic) NSString *oauthTokenNoSync;
@property (copy) NSString *oauthRefreshToken;
@property (retain, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *findMyiPhoneToken;
@property (copy, nonatomic) NSString *mapsToken;
@property (copy, nonatomic) NSString *mdmServerToken;
@property (copy, nonatomic) NSString *hsaToken;
@property (copy, nonatomic) NSDate *tokenExpiryDate;
@property (copy, nonatomic) NSString *oauthToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)credentialWithPassword:(id)a0;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)a0 credentialType:(id)a1;
+ (id)credentialPolicyForAccountTypeIdentifier:(id)a0 key:(id)a1 clientID:(id)a2;
+ (id)supportedKeysForAccountTypeIdentifier:(id)a0 credentialType:(id)a1;
+ (id)additionalServiceSegmentForAccountTypeIdentifier:(id)a0;
+ (id)credentialWithOAuthToken:(id)a0 tokenSecret:(id)a1;
+ (BOOL)credentialPolicyIsMixedForAccountTypeIdentifier:(id)a0;

- (id)_encodeProtobufData;
- (void)_markPropertyDirty:(id)a0;
- (id)_initWithProtobuf:(id)a0;
- (id)_initWithProtobufData:(id)a0;
- (id)_encodeProtobuf;
- (id)initWithOAuthToken:(id)a0 tokenSecret:(id)a1;
- (void)_clearDirtyProperties;
- (id)keysForCredentialItems;
- (id)initWithCoder:(id)a0;
- (id)initWithPassword:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)credentialItems;
- (void).cxx_destruct;
- (void)_setOwningAccount:(id)a0;
- (id)initWithOAuth2Token:(id)a0 refreshToken:(id)a1 expiryDate:(id)a2;
- (id)credentialItemForKey:(id)a0;
- (void)setCredentialItem:(id)a0 forKey:(id)a1;
- (id)init;

@end
