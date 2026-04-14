@class AMSThreadSafeObject;

@interface AMSPurchaseQueueBatchList : NSObject

@property (retain) AMSThreadSafeObject *backingArray;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)appendBatch:(id)a0;
- (id)batchForPurchase:(id)a0;
- (id)nextPurchase;
- (void)popBatch:(id)a0;

@end
