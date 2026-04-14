@class NSLock, NSString, NSDate;

@interface ICDistributedLock : NSObject {
    NSLock *threadLock;
    NSString *lockName;
    BOOL hasLock;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)a0;

- (void)invalidate;
- (id)initWithPath:(id)a0;
- (id)description;
- (id)init;
- (BOOL)tryLock;
- (void)unlock;
- (void)dealloc;
- (void)breakLock;

@end
