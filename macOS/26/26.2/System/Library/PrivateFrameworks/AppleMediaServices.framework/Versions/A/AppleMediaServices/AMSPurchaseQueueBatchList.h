@class AMSThreadSafeObject;

@interface AMSPurchaseQueueBatchList : NSObject

@property (retain) AMSThreadSafeObject *backingArray;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)init;
- (void)appendBatch:(id)a0;
- (id)batchForPurchase:(id)a0;
- (id)nextPurchase;
- (void)popBatch:(id)a0;

@end
