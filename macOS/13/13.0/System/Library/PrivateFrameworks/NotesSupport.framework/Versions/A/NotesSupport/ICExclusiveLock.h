@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void)dealloc;
- (id)name;
- (id)init;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (void)setName:(id)a0;
- (BOOL)tryLock;
- (id)initWithName:(id)a0 cachePath:(id)a1;

@end
