@class NSString, NSData;

@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord

@property (copy, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSData *responseData;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCredentialIdentifier:(id)a0;

@end
