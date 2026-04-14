@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (id)initWithPath:(id)a0;
- (void)unlock;
- (void)dealloc;
- (void)lock;
- (BOOL)tryLock;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
