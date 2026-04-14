@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (void)unlock;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)tryLock;
- (void)lock;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
