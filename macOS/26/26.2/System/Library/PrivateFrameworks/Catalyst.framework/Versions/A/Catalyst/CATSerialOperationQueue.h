@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (void)addOperation:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;

@end
