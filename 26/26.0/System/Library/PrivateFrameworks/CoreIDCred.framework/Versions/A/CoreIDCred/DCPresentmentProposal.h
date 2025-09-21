@class NSString, NSDictionary, NSData, DCCredentialRevocationInfo, DCPresentmentProposalReaderAnalytics, DCPresentmentProposalReaderMetadata;

@interface DCPresentmentProposal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) NSString *presentmentKeyIdentifier;
@property (readonly, nonatomic) NSData *presentmentPublicKey;
@property (readonly, nonatomic) NSString *partition;
@property (readonly, nonatomic) NSString *docType;
@property (readonly, nonatomic) NSDictionary *elements;
@property (readonly, nonatomic) NSData *authACL;
@property (readonly, nonatomic) NSData *readerAuthCertificateData;
@property (readonly, nonatomic) NSData *issuerSignerCertificateData;
@property (readonly, nonatomic) NSString *region;
@property (readonly, nonatomic) NSString *issuingJurisdiction;
@property (readonly, nonatomic) DCCredentialRevocationInfo *credentialRevocationInfo;
@property (readonly, nonatomic) DCPresentmentProposalReaderMetadata *readerMetadata;
@property (readonly, nonatomic) DCPresentmentProposalReaderAnalytics *readerAnalytics;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredentialIdentifier:(id)a0 presentmentKeyIdentifier:(id)a1 presentmentPublicKey:(id)a2 partition:(id)a3 docType:(id)a4 elements:(id)a5 authACL:(id)a6 readerAuthCertificateData:(id)a7 issuerSignerCertificateData:(id)a8 readerMetadata:(id)a9 readerAnalytics:(id)a10 region:(id)a11 issuingJurisdiction:(id)a12 credentialRevocationInfo:(id)a13;

@end
