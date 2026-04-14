@interface StoreKit.TransactionReceiver : NSObject <SKTransactionReceiverProtocol> {
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ logKey;
}

- (id)init;
- (void).cxx_destruct;
- (void)receivedTransactions:(id)a0;

@end
