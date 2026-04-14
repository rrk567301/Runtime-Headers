@class NSString, NSCondition;

@interface NSConditionLock : NSObject <NSLocking> {
    NSCondition *cond;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *t;
    long long v;
    NSString *n;
}

@property (readonly) long long condition;
@property (copy) NSString *name;

- (void)unlock;
- (id)initWithCondition:(long long)a0;
- (void)dealloc;
- (BOOL)tryLockWhenCondition:(long long)a0;
- (void)lock;
- (void)lockWhenCondition:(long long)a0;
- (id)init;
- (BOOL)lockWhenCondition:(long long)a0 beforeDate:(id)a1;
- (id)description;
- (BOOL)lockBeforeDate:(id)a0;
- (void)unlockWithCondition:(long long)a0;
- (BOOL)tryLock;

@end
