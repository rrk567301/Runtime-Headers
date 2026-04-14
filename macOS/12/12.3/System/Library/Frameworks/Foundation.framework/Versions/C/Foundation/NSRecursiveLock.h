@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (BOOL)lockBeforeDate:(id)a0;
- (BOOL)isLocking;

@end
