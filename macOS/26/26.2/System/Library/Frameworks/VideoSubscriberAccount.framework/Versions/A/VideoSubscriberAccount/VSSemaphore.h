@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)signal;
- (void)wait;
- (void).cxx_destruct;
- (id)init;

@end
