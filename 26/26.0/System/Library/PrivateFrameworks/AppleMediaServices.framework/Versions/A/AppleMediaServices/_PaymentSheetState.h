@class AMSBiometricsSignatureResult, NSString, NSError, NSNumber;

@interface _PaymentSheetState : NSObject

@property (retain) NSError *error;
@property BOOL didAuthorizePayment;
@property BOOL didBiometricsLockout;
@property unsigned long long cancellationType;
@property BOOL didPresent;
@property (retain) NSString *passwordEquivalentToken;
@property (retain) NSNumber *paymentMethodType;
@property (retain) NSString *paymentToken;
@property (retain) AMSBiometricsSignatureResult *signatureResult;

- (id)init;
- (void).cxx_destruct;

@end
