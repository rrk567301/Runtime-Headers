@class NSLock, NSString, NSDate;

@interface NSDistributedLock : NSObject {
    NSLock *threadLock;
    NSString *lockName;
    BOOL hasLock;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (void)unlock;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)description;
- (BOOL)tryLock;
- (void)breakLock;

@end
