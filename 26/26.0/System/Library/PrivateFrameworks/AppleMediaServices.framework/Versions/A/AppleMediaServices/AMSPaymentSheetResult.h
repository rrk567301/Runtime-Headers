@class NSString, NSNumber, AMSBiometricsSignatureResult;

@interface AMSPaymentSheetResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *delegateAuthenticateToken;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) NSNumber *paymentMethodType;
@property (retain) NSString *paymentToken;
@property (retain) AMSBiometricsSignatureResult *signatureResult;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
