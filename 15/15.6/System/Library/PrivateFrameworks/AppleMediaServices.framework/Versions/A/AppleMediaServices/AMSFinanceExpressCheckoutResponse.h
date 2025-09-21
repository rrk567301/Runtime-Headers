@interface AMSFinanceExpressCheckoutResponse : AMSFinancePaymentSheetResponse

+ (char)_isExpressCheckoutEnabledForBag:(id)a0;
+ (char)_isExpressCheckoutRecordUserChoiceEnabledForBag:(id)a0;
+ (char)isEligibleForBag:(id)a0;
+ (char)isExpressCheckoutPayload:(id)a0;
+ (char)isExpressCheckoutShouldCheckForWalletBiometricsForBag:(id)a0;

- (id)initWithResponseDictionary:(id)a0 taskInfo:(id)a1;

@end
