@class NSOperation;

@interface CATSerialOperationQueue : CATOperationQueue {
    NSOperation *mLastOperation;
}

- (id)debugDescription;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
