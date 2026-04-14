@class NSConditionLock;

@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (id)init;
- (BOOL)waitForCompletionWithTimeout:(double)a0;

@end
