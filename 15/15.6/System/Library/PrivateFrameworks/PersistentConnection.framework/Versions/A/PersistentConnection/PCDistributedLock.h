@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)lock;
- (void)unlock;
- (char)tryLock;
- (id)initWithPath:(id)a0;
- (char)_lockBlocking:(char)a0;

@end
