@class NSConditionLock;

@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (id)init;
- (void)waitForCompletion;
- (void).cxx_destruct;
- (BOOL)waitForCompletionWithTimeout:(double)a0;

@end
