@class NSConditionLock;

@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)complete;
- (void)waitForCompletion;
- (char)waitForCompletionWithTimeout:(double)a0;

@end
