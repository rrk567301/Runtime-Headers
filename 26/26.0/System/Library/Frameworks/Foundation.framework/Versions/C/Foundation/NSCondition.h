@class NSString;

@interface NSCondition : NSObject <NSLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } c;
    NSString *n;
}

@property (copy) NSString *name;

- (void)unlock;
- (void)dealloc;
- (void)signal;
- (void)broadcast;
- (void)lock;
- (void)wait;
- (id)init;
- (id)description;
- (BOOL)waitUntilDate:(id)a0;

@end
