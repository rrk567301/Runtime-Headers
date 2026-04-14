@class NSLock, NSMutableArray;

@interface IKSyncTaskBag : NSObject {
    NSMutableArray *_content;
    NSLock *_lock;
}

- (id)init;
- (void)dealloc;
- (void)_flush:(id)a0;
- (void)addTaskResult:(id)a0 cell:(id)a1 source:(id)a2;
- (void)flush:(id)a0 waitUntilDone:(BOOL)a1;

@end
