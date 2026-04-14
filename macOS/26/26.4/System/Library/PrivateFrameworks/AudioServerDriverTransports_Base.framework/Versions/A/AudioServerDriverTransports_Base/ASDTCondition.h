@class NSString;

@interface ASDTCondition : NSObject <NSLocking> {
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cond;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (retain, nonatomic) NSString *name;

+ (id)conditionWithName:(id)a0;

- (void)wait;
- (void)signal;
- (void)broadcast;
- (void)unlock;
- (void).cxx_destruct;
- (id)init;
- (void)lock;
- (void)dealloc;
- (BOOL)waitUntilTime:(struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; })a0;

@end
