@class NSURL;

@interface AMSCardEnrollment : NSObject

@property (class, readonly, copy) NSURL *paymentServicesMerchantURL;

+ (BOOL)isAURUMWithBag:(id)a0;
+ (BOOL)shouldUseAutoEnrollmentWithBag:(id)a0;
+ (id)getCurrentPaymentPassIdentifier;
+ (id)_cardEligibilityStatusForCountryCode:(id)a0;
+ (BOOL)_shouldAttemptAutoEnrollmentWithCountryCode:(id)a0;
+ (BOOL)beginCardEnrollmentAttemptWithBag:(id)a0 account:(id)a1;
+ (BOOL)canPerformPSD2StyleBuyForAccessControlRef:(struct __SecAccessControl { } *)a0;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:(id)a0 buyParams:(id)a1 purchaseResult:(id)a2;
+ (BOOL)isApplePayWalletRefreshedForBag:(id)a0;
+ (id)isCardEligibleForAutoEnrollmentWithCountryCode:(id)a0;
+ (id)paymentServicesMerchantURLPromise;
+ (id)shouldAttemptApplePayClassicWithAccount:(id)a0 options:(id)a1 countryCode:(id)a2 paymentNetworks:(id)a3;
+ (BOOL)shouldAttemptApplePayClassicWithBag:(id)a0 account:(id)a1 accessControlRef:(struct __SecAccessControl { } *)a2;
+ (BOOL)shouldAttemptApplePayClassicWithBag:(id)a0 account:(id)a1 options:(id)a2;
+ (id)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 account:(id)a2 accessControlRef:(struct __SecAccessControl { } *)a3;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 account:(id)a2 options:(id)a3;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:(id)a0 account:(id)a1 accessControlRef:(struct __SecAccessControl { } *)a2;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:(id)a0 account:(id)a1 options:(id)a2;
+ (BOOL)shouldCheckForWalletBiometricsForBag:(id)a0;
+ (BOOL)shouldUseApplePayClassicWithBag:(id)a0;
+ (BOOL)shouldUseExtendedEnrollmentWithBag:(id)a0;
+ (BOOL)shouldUseUpsellEnrollmentWithBag:(id)a0;
+ (void)updateAutoEnrollmentIdentifier;

@end
