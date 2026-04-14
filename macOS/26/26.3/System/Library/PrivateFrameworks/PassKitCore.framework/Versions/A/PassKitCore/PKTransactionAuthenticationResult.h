@class NSData, PKTransactionAuthenticationContext, NSString;

@interface PKTransactionAuthenticationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKTransactionAuthenticationContext *authenticationContext;
@property (copy, nonatomic) NSData *encryptedPIN;
@property (copy, nonatomic) NSData *transactionDetailsSignature;
@property (copy, nonatomic) NSData *userConfirmation;
@property (copy, nonatomic) NSString *transactionServiceIdentifier;
@property (readonly, nonatomic) BOOL hasDataForAllRequestedAuthenticationMechanisms;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToTransactionAuthenticationResult:(id)a0;

@end
