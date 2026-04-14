@class DCCredentialRevocationInfo, NSString, DCCredentialOptions, NSArray, NSDate, NSDictionary, NSData;

@interface DCCredentialProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *partition;
@property (nonatomic) unsigned long long credentialState;
@property (retain, nonatomic) DCCredentialOptions *options;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSArray *payloads;
@property (retain, nonatomic) NSDictionary *keySigningKeys;
@property (retain, nonatomic) NSDictionary *deviceEncryptionKeys;
@property (retain, nonatomic) NSDictionary *presentmentKeys;
@property (retain, nonatomic) NSArray *payloadProtectionKeys;
@property (nonatomic) BOOL hasUsablePresentmentAuthPolicy;
@property (nonatomic) BOOL needsPresentmentKeyRefresh;
@property (retain, nonatomic) NSArray *provisioningFailureReasons;
@property (retain, nonatomic) NSData *encryptedCredentialPII;
@property (readonly, nonatomic) NSDate *payloadValidFrom;
@property (readonly, nonatomic) NSDate *payloadValidUntil;
@property (readonly, nonatomic) NSDate *payloadSignedAt;
@property (readonly, nonatomic) NSData *payloadIngestionHash;
@property (readonly, nonatomic) NSString *docType;
@property (readonly, nonatomic) DCCredentialRevocationInfo *credentialRevocationInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
