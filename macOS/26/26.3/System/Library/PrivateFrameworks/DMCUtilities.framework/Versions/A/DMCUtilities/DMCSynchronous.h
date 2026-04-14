@class NSConditionLock;

@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (id)init;
- (void).cxx_destruct;
- (void)waitForCompletion;

@end
