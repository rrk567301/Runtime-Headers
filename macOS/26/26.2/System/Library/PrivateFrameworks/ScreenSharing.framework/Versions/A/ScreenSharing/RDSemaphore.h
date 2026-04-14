@class NSObject;
@protocol OS_dispatch_semaphore;

@interface RDSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *semaphore;
    int oneShotState;
}

- (long long)signal;
- (long long)wait:(unsigned int)a0;
- (id)init;
- (id)initWithCount:(long long)a0;
- (void)dealloc;
- (id)initAsOneShot;

@end
