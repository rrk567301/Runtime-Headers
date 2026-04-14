@class NSString, NSDictionary, NSArray, NSDate, DCCredentialRevocationInfo, NSData;

@interface DCCredentialPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long protectionType;
@property (retain, nonatomic) NSString *docType;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSDate *validFrom;
@property (retain, nonatomic) NSDate *validUntil;
@property (retain, nonatomic) NSDate *signedAt;
@property (retain, nonatomic) NSDictionary *elementIdentifiersByNamespace;
@property (retain, nonatomic) NSArray *issuerCertificateChain;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) NSString *issuingJurisdiction;
@property (retain, nonatomic) NSString *issuingAuthority;
@property (retain, nonatomic) DCCredentialRevocationInfo *credentialRevocationInfo;
@property (retain, nonatomic) NSData *payloadData;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
