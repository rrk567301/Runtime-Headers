@class NSConditionLock;

@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (void)waitForCompletion;
- (void).cxx_destruct;
- (id)init;
- (BOOL)waitForCompletionWithTimeout:(double)a0;

@end
