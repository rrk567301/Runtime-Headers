@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
}

- (void)dealloc;
- (id)init;
- (id)name;
- (void)lock;
- (void)unlock;
- (void)setName:(id)a0;
- (id)initWithName:(id)a0;
- (BOOL)tryLock;

@end
