@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void)unlock;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)lock;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (id)init;
- (id)name;
- (BOOL)tryLock;
- (void).cxx_destruct;

@end
