@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (id)debugDescription;
- (void)addOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
