@class NSLock, NSString, NSDate;

@interface ICDistributedLock : NSObject {
    NSLock *threadLock;
    NSString *lockName;
    char hasLock;
}

@property (readonly, copy) NSDate *lockDate;

+ (id)lockWithPath:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)unlock;
- (char)tryLock;
- (void)breakLock;
- (id)initWithPath:(id)a0;

@end
