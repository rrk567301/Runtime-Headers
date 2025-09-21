@interface IASThreadSafeEvent : NSObject

@property char flag;
@property char initialized;
@property struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } condition;
@property (readonly) char isSet;

- (void)dealloc;
- (id)init;
- (void)set;
- (void)clear;
- (void)wait;
- (void)withLock:(id /* block */)a0;
- (char)waitForTimeInterval:(double)a0;

@end
