@class NSConditionLock;

@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (id)init;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (BOOL)waitForCompletionWithTimeout:(double)a0;

@end
