@class NSDate;

@interface NSDistributedLock : NSObject {
    void *_priv;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)unlock;
- (id)initWithPath:(id)a0;
- (void)breakLock;
- (BOOL)tryLock;

@end
