@class NSString, PKPaymentTransaction, PKPaymentApplication;

@interface PKTransactionMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
}

@property (nonatomic, getter=isClearingAttempt) BOOL clearingAttempt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (id)mapsURL;
- (BOOL)isRefund;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isSettlement;
- (id)initWithTransaction:(id)a0 paymentApplication:(id)a1;
- (id)mapsMerchantLookupRequest;

@end
