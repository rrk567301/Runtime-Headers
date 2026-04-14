@class NSLock, NSMutableArray;

@interface KHDBBlockQueue : KHDBDispatchQueue {
    NSLock *_addLock;
    NSLock *_waitLock;
    NSMutableArray *_blockedAdds;
}

- (id)init;
- (void)dealloc;
- (void)waitUntilAllBlocksAreFinished;
- (void)addBlock:(id /* block */)a0;
- (unsigned long long)blockedCount;
- (void)waitForOutstandingBlocks;
- (void)waitForOutstandingOperations;

@end
