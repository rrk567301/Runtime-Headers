@interface AMSPaymentValidationService : NSObject

+ (char)_isEntitledForDirectAccess;
+ (id)paymentHardwareStatusHeaders;
+ (id)performPaymentHardwareStatusWithService:(id)a0;

@end
