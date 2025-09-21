@class NSError, NSString, AMSBiometricsSignatureResult;

@interface _PaymentSheetState : NSObject

@property (retain) NSError *error;
@property char didAuthorizePayment;
@property char didBiometricsLockout;
@property unsigned long long cancellationType;
@property char didPresent;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) NSString *paymentToken;
@property (retain) AMSBiometricsSignatureResult *signatureResult;

- (id)init;
- (void).cxx_destruct;

@end
