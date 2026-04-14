@class NSURL;

@interface AMSCardEnrollment : NSObject

@property (class, readonly, copy) NSURL *paymentServicesMerchantURL;
@property (class, readonly) BOOL shouldAttemptAutoEnrollment;

+ (id)_currentIdentifier;
+ (BOOL)beginCardEnrollmentAttemptWithBag:(id)a0 account:(id)a1;
+ (void)clearAutoEnrollmentIdentifier;
+ (void)finishCardEnrollmentAttemptWithBag:(id)a0 buyParams:(id)a1 purchaseResult:(id)a2;
+ (BOOL)shouldAttemptApplePayClassicWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (BOOL)shouldAttemptAutoEnrollmentWithBag:(id)a0 accessControlRef:(struct __SecAccessControl { } *)a1;
+ (BOOL)shouldUseApplePayClassicWithBag:(id)a0;
+ (BOOL)shouldUseAutoEnrollmentWithBag:(id)a0;
+ (void)updateAutoEnrollmentIdentifier;
+ (BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)a0 paymentNetworks:(id)a1 accessControlRef:(struct __SecAccessControl { } *)a2;
+ (BOOL)shouldAttemptAutoEnrollmentWithCountryCode:(id)a0;
+ (BOOL)shouldUseAutoEnrollmentWithPercentage:(double)a0 sessionDuration:(double)a1;
+ (id)_cardEligibilityStatusForCountryCode:(id)a0;
+ (id)_paymentServicesMerchantURLPromise;
+ (id)_shouldAttemptApplePayWithCountryCode:(id)a0 paymentNetworks:(id)a1;

@end
