@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
}

- (void)dealloc;
- (id)name;
- (id)init;
- (void)lock;
- (void)unlock;
- (id)initWithName:(id)a0;
- (void)setName:(id)a0;
- (BOOL)tryLock;

@end
