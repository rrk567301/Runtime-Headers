@class NSData;

@interface PKTransactionAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requestedAuthenticationMechanisms;
@property (nonatomic) unsigned long long processedAuthenticationMechanisms;
@property (nonatomic) unsigned long long dataCollectedAuthenticationMechanisms;
@property (nonatomic) BOOL complete;
@property (nonatomic) long long paymentPINFormat;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSData *signingKeyMaterial;
@property (copy, nonatomic) NSData *partialSignature;
@property (nonatomic) long long authenticationFailure;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToTransactionAuthenticationContext:(id)a0;

@end
