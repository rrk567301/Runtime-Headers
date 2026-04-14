@class NSString, NSArray, NSData, NSDate, DCCredentialRevocationInfo;

@interface DCPayloadProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSDate *validFrom;
@property (retain, nonatomic) NSDate *validUntil;
@property (retain, nonatomic) NSDate *signedAt;
@property (retain, nonatomic) NSData *ingestionHash;
@property (retain, nonatomic) NSArray *issuerCertificateChain;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *issuingJurisdiction;
@property (retain, nonatomic) NSString *issuingAuthority;
@property (retain, nonatomic) DCCredentialRevocationInfo *credentialRevocationInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
