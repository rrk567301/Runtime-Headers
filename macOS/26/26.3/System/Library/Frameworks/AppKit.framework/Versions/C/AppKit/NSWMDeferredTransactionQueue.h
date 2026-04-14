@interface NSWMDeferredTransactionQueue : NSObject {
    void /* unknown type, empty encoding */ _lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)waitUntilEmpty;
- (id)popCompletedTransactions;
- (void)queueTransaction:(id)a0;

@end
