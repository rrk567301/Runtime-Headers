@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction

@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction;
@property (readonly, nonatomic) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)eventType;
- (id)initWithTransaction:(id)a0 relatedTopUpWithdrawlTransaction:(id)a1 relatedTopUpDepositTransaction:(id)a2 unread:(char)a3;
- (char)isEqualToActivityEvent:(id)a0;

@end
