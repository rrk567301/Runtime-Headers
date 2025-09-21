@class NSObject;
@protocol OS_dispatch_semaphore;

@interface RDSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *semaphore;
    int oneShotState;
}

- (void)dealloc;
- (long long)signal;
- (id)initWithCount:(long long)a0;
- (id)init;
- (long long)wait:(unsigned int)a0;
- (id)initAsOneShot;

@end
