@class NSLock, NSMutableArray;

@interface KHDBBlockQueue : KHDBDispatchQueue {
    NSLock *_addLock;
    NSLock *_waitLock;
    NSMutableArray *_blockedAdds;
}

- (void)waitUntilAllBlocksAreFinished;
- (void)addBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)blockedCount;
- (void)waitForOutstandingBlocks;
- (void)waitForOutstandingOperations;

@end
