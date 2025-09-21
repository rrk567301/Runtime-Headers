@interface APSDeferredTask : NSObject {
    id _obj;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cond;
    BOOL _completed;
}

@property (retain, nonatomic) id result;

- (void)dealloc;
- (id)init;
- (void)setNotCompleted;

@end
