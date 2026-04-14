@interface PKCreditAccountController : NSObject

+ (unsigned long long)paymentEducationStateForAccount:(id)a0 mostRecentTransactions:(id)a1 pendingPayments:(id)a2 upcomingScheduledPayments:(id)a3;
+ (id)relevantScheduledPaymentFromScheduledPayments:(id)a0 account:(id)a1;
+ (void)resolutionToReceiveCashbackForAccount:(id)a0 accountUser:(id)a1 withPeerPaymentAccount:(id)a2 completion:(id /* block */)a3;
+ (BOOL)shouldShowCardNumbersWithAccountAvailabilityInfo:(id)a0 dpanSuffixForPaymentApplication:(id)a1;
+ (BOOL)supportsCapability:(unsigned long long)a0 forAccount:(id)a1 paymentApplicationState:(long long)a2 dpanSuffix:(id)a3;
+ (BOOL)supportsCapability:(unsigned long long)a0 forAccount:(id)a1 paymentPass:(id)a2;
+ (BOOL)supportsCapability:(unsigned long long)a0 forAccount:(id)a1 transactionSourceCollection:(id)a2;

@end
