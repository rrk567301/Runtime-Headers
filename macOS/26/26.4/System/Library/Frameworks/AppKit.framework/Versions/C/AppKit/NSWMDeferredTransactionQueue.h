@interface NSWMDeferredTransactionQueue : NSObject {
    void /* unknown type, empty encoding */ _lock;
}

- (void)waitUntilEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)popCompletedTransactions;
- (void)queueTransaction:(id)a0;

@end
