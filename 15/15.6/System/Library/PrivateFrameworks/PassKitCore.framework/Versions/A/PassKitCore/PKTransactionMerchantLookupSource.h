@class NSString, PKPaymentTransaction, PKPaymentApplication;

@interface PKTransactionMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
}

@property (nonatomic, getter=isClearingAttempt) char clearingAttempt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)identifier;
- (long long)type;
- (id)mapsURL;
- (char)isRefund;
- (char)isSettlement;
- (id)initWithTransaction:(id)a0 paymentApplication:(id)a1;
- (id)mapsMerchantLookupRequest;

@end
