@class NSString, AMSBiometricsSignatureResult;

@interface AMSPaymentSheetResult : NSObject

@property (retain) NSString *delegateAuthenticateToken;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) NSString *paymentToken;
@property (retain) AMSBiometricsSignatureResult *signatureResult;

- (void).cxx_destruct;

@end
