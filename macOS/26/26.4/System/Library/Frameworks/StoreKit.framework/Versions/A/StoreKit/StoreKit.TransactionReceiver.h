@interface StoreKit.TransactionReceiver : NSObject <SKTransactionReceiverProtocol> {
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ logKey;
}

- (void).cxx_destruct;
- (id)init;
- (void)receivedTransactions:(id)a0;

@end
