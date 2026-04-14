@class DCCredentialRevocationInfo, NSString, DCCredentialOptions, NSData, NSDate, NSDictionary, NSArray;

@interface DCCredentialProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSString *partition;
@property (nonatomic) unsigned long long credentialState;
@property (retain, nonatomic) DCCredentialOptions *options;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSDate *payloadValidFrom;
@property (retain, nonatomic) NSDate *payloadValidUntil;
@property (retain, nonatomic) NSDate *payloadSignedAt;
@property (retain, nonatomic) NSData *payloadIngestionHash;
@property (retain, nonatomic) NSDictionary *keySigningKeys;
@property (retain, nonatomic) NSDictionary *deviceEncryptionKeys;
@property (retain, nonatomic) NSDictionary *presentmentKeys;
@property (retain, nonatomic) NSArray *payloadProtectionKeys;
@property (nonatomic) BOOL hasUsablePresentmentAuthPolicy;
@property (nonatomic) BOOL needsPresentmentKeyRefresh;
@property (retain, nonatomic) NSString *docType;
@property (retain, nonatomic) NSArray *issuerCertificateChain;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *issuingJurisdiction;
@property (retain, nonatomic) NSString *issuingAuthority;
@property (retain, nonatomic) DCCredentialRevocationInfo *credentialRevocationInfo;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
