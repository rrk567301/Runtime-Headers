@class NSString, NSDictionary, NSArray, NSDate, DCCredentialRevocationInfo, NSData;

@interface DCCredentialPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long protectionType;
@property (readonly, nonatomic) NSString *docType;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) NSDate *validFrom;
@property (readonly, nonatomic) NSDate *validUntil;
@property (readonly, nonatomic) NSDate *signedAt;
@property (readonly, nonatomic) NSDictionary *elementIdentifiersByNamespace;
@property (readonly, nonatomic) NSArray *issuerCertificateChain;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) NSString *issuingJurisdiction;
@property (readonly, nonatomic) NSString *issuingAuthority;
@property (readonly, nonatomic) DCCredentialRevocationInfo *credentialRevocationInfo;
@property (readonly, nonatomic) NSData *payloadData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFormat:(unsigned long long)a0 protectionType:(unsigned long long)a1 docType:(id)a2 createdAt:(id)a3 updatedAt:(id)a4 validFrom:(id)a5 validUntil:(id)a6 signedAt:(id)a7 elementIdentifiersByNamespace:(id)a8 issuerCertificateChain:(id)a9 region:(id)a10 issuingJurisdiction:(id)a11 issuingAuthority:(id)a12 credentialRevocationInfo:(id)a13 payloadData:(id)a14;

@end
