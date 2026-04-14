@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking> {
    struct { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m; struct _opaque_pthread_t *t; unsigned long long cnt; struct *cd; NSString *n; } _priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (BOOL)lockBeforeDate:(id)a0;
- (id)init;
- (id)description;
- (BOOL)tryLock;
- (void)lock;
- (void)dealloc;
- (BOOL)isLocking;

@end
