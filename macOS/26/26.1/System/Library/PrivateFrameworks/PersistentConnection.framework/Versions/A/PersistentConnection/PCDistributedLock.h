@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (void)unlock;
- (id)initWithPath:(id)a0;
- (void)lock;
- (BOOL)tryLock;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
