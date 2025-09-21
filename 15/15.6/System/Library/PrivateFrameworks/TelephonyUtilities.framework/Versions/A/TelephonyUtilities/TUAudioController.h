@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TUAudioController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock;

- (id)init;
- (void).cxx_destruct;
- (void)_acquireLock;
- (void)_releaseLock;
- (void)_requestUpdatedValueWithBlock:(id /* block */)a0 object:(id *)a1 isRequestingPointer:(char *)a2 forceNewRequest:(char)a3 scheduleTimePointer:(unsigned long long *)a4 notificationString:(id)a5 notificationUserInfo:(id)a6 queue:(id)a7;
- (void)_requestUpdatedValueWithBlock:(id /* block */)a0 object:(id *)a1 isRequestingPointer:(char *)a2 forceNewRequest:(char)a3 scheduleTimePointer:(unsigned long long *)a4 notificationString:(id)a5 queue:(id)a6;

@end
