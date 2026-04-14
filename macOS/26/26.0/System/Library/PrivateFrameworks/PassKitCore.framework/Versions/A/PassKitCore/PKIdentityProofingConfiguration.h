@class NSString, NSURL, PKIdentityProofingDisplayMessage;

@interface PKIdentityProofingConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) long long target;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *productIdentifier;
@property (retain, nonatomic) NSString *accountKeyIdentifier;
@property (nonatomic) long long idType;
@property (retain, nonatomic) NSURL *learnMoreURL;
@property (retain, nonatomic) PKIdentityProofingDisplayMessage *proofingErrorMessage;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToConfig:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_mutableDictionaryRepresentation;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 credentialIdentifier:(id)a3 status:(long long)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 credentialIdentifier:(id)a3 status:(long long)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 learnMoreURL:(id)a8;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 credentialIdentifier:(id)a3 status:(long long)a4 productIdentifier:(id)a5 accountKeyIdentifier:(id)a6 idType:(long long)a7 learnMoreURL:(id)a8 proofingErrorMessage:(id)a9;

@end
