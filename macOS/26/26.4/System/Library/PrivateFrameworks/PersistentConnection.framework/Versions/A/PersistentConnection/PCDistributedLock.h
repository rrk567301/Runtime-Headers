@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (id)initWithPath:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)tryLock;
- (void)lock;
- (void)dealloc;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
