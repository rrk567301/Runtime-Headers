@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (void)dealloc;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (id)initWithName:(id)a0;
- (id)initWithPath:(id)a0;
- (BOOL)tryLock;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
