@class NSString, NSCondition;

@interface NSConditionLock : NSObject <NSLocking> {
    NSCondition *cond;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *t;
    long long v;
    NSString *n;
}

@property (readonly) long long condition;
@property (copy) NSString *name;

- (void)lockWhenCondition:(long long)a0;
- (void)unlock;
- (BOOL)lockBeforeDate:(id)a0;
- (id)initWithCondition:(long long)a0;
- (BOOL)tryLockWhenCondition:(long long)a0;
- (BOOL)lockWhenCondition:(long long)a0 beforeDate:(id)a1;
- (id)init;
- (void)unlockWithCondition:(long long)a0;
- (id)description;
- (BOOL)tryLock;
- (void)lock;
- (void)dealloc;

@end
