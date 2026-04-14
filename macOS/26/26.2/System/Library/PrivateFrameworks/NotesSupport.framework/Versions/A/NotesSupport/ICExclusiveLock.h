@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void)setName:(id)a0;
- (void)unlock;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (void).cxx_destruct;
- (id)name;
- (BOOL)tryLock;
- (void)lock;
- (id)init;
- (void)dealloc;

@end
