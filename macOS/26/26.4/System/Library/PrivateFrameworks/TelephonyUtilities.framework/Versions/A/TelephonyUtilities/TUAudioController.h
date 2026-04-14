@interface TUAudioController : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } modifyingStateLock;

- (void)_requestUpdatedValueWithBlock:(id /* block */)a0 object:(id *)a1 isRequestingPointer:(BOOL *)a2 forceNewRequest:(BOOL)a3 scheduleTimePointer:(unsigned long long *)a4 notificationString:(id)a5 queue:(id)a6;
- (void)_acquireLock;
- (void)_releaseLock;
- (id)init;
- (void)_requestUpdatedValueWithBlock:(id /* block */)a0 object:(id *)a1 isRequestingPointer:(BOOL *)a2 forceNewRequest:(BOOL)a3 scheduleTimePointer:(unsigned long long *)a4 notificationString:(id)a5 notificationUserInfo:(id)a6 queue:(id)a7;

@end
