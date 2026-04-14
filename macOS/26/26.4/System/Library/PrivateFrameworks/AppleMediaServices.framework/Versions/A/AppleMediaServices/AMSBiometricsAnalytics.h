@interface AMSBiometricsAnalytics : NSObject

+ (id)biometricsStatusFor:(id)a0;
+ (void)recordBiometricsStateChangeWithOriginalAccountState:(long long)a0 newAccountState:(long long)a1;
+ (void)recordBiometricsStateChangeWithOriginalDeviceState:(long long)a0 newDeviceState:(long long)a1;
+ (void)recordBiometricsStateChangeWithOriginalDeviceState:(long long)a0 newDeviceState:(long long)a1 originalAccountState:(long long)a2 newAccountState:(long long)a3;
+ (void)recordBiometricsStatus;
+ (void)recordRequiredPasswordPaymentSheetEventWithBiometricsAvailabilityError:(id)a0 paymentSheetCompleted:(BOOL)a1;
+ (void)recordServerBiometricActionWithAction:(unsigned long long)a0 account:(id)a1;

- (void).cxx_destruct;
- (id)init;

@end
