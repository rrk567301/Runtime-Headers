@class NSConditionLock;

@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (id)init;

@end
