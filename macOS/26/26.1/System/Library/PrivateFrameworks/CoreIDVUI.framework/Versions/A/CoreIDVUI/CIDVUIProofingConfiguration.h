@class NSString, NSURL, NSData, CIDVUIProofingDisplayMessage;

@interface CIDVUIProofingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) long long target;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) NSString *accountKeyIdentifier;
@property (retain, nonatomic) NSURL *learnMoreURL;
@property (retain, nonatomic) NSURL *extendedReviewURL;
@property (nonatomic) long long idType;
@property (retain, nonatomic) NSData *supplementalProvisioningData;
@property (nonatomic) BOOL isPairedWatchUnsupported;
@property (retain, nonatomic) CIDVUIProofingDisplayMessage *proofingErrorMessage;
@property (retain, nonatomic) NSString *piiTokenIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 learnMoreURL:(id)a7 extendedReviewURL:(id)a8;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 extendedReviewURL:(id)a8 learnMoreURL:(id)a9 supplementalProvisioningData:(id)a10;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 extendedReviewURL:(id)a8 learnMoreURL:(id)a9 supplementalProvisioningData:(id)a10 isPairedWatchUnsupported:(BOOL)a11;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 extendedReviewURL:(id)a8 learnMoreURL:(id)a9 supplementalProvisioningData:(id)a10 isPairedWatchUnsupported:(BOOL)a11 proofingErrorMessage:(id)a12;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 extendedReviewURL:(id)a8 learnMoreURL:(id)a9 supplementalProvisioningData:(id)a10 isPairedWatchUnsupported:(BOOL)a11 proofingErrorMessage:(id)a12 piiTokenIdentifier:(id)a13;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 supplementalProvisioningData:(id)a8;

@end
