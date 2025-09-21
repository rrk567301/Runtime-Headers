@interface _PFTask : NSObject {
    int _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } condition;
    int isFinishedFlag;
}

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithFunction:(void /* function */ *)a0 withArgument:(void *)a1 andPriority:(int)a2;

@end
