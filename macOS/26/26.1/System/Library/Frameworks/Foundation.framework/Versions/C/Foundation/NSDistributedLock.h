@class NSLock, NSString, NSDate;

@interface NSDistributedLock : NSObject {
    NSLock *threadLock;
    NSString *lockName;
    BOOL hasLock;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)a0;

- (void)unlock;
- (id)initWithPath:(id)a0;
- (void)invalidate;
- (BOOL)tryLock;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)breakLock;

@end
