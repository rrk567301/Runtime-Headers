@class NSURL;

@interface AMSCardEnrollment : NSObject

@property (class, readonly, copy) NSURL *paymentServicesMerchantURL;

+ (char)shouldUseAutoEnrollmentWithBag:(id)a0;
+ (char)isAURUMWithBag:(id)a0;
+ (id)_cardEligibilityStatusForCountryCode:(id)a0;
+ (id)_currentIdentifier;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayClassicWithAccount:(id)a0 options:(id)a1 countryCode:(id)a2 paymentNetworks:(id)a3;
+ (id)_shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1;
+ (char)_shouldAttemptAutoEnrollmentWithCountryCode:(id)a0;
+ (char)beginCardEnrollmentAttemptWithBag:(id)a0 account:(id)a1;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:(id)a0 buyParams:(id)a1 purchaseResult:(id)a2;
+ (char)isApplePayWalletRefreshedForBag:(id)a0;
+ (char)shouldAttemptApplePayClassicWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (char)shouldAttemptApplePayClassicWithBag:(id)a0 account:(id)a1 options:(id)a2;
+ (char)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 accessControlRef:(struct __SecAccessControl { } *)a2;
+ (char)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 account:(id)a2 options:(id)a3;
+ (char)shouldAttemptAutoEnrollmentWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (char)shouldAttemptAutoEnrollmentWithBag:(id)a0 account:(id)a1 options:(id)a2;
+ (char)shouldCheckForWalletBiometricsForBag:(id)a0;
+ (char)shouldUseApplePayClassicWithBag:(id)a0;
+ (char)shouldUseExtendedEnrollmentWithBag:(id)a0;
+ (char)shouldUseUpsellEnrollmentWithBag:(id)a0;
+ (void)updateAutoEnrollmentIdentifier;

@end
