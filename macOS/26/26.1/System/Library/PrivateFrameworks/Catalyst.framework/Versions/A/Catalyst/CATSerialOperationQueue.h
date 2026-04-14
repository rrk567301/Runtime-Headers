@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;

@end
