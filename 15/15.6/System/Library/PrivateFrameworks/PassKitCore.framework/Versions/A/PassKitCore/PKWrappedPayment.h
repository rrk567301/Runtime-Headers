@class PKSecureElementCertificateSet, NSString, NSArray, NSData;

@interface PKWrappedPayment : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *transactionData;
@property (copy, nonatomic) NSData *transactionInstructionsSignature;
@property (copy, nonatomic) PKSecureElementCertificateSet *certificates;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *kextBlacklistVersion;
@property (copy, nonatomic) NSData *enrollmentSignature;
@property (copy, nonatomic) NSArray *SEPCertificates;
@property (copy, nonatomic) NSData *confirmationBlobHash;
@property (nonatomic) long long confirmationBlobVersion;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
