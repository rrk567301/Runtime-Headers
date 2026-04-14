@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (id)debugDescription;
- (id)init;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;

@end
