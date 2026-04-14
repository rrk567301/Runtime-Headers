@class NSConditionLock;

@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (void)waitForCompletion;
- (void).cxx_destruct;
- (id)init;

@end
