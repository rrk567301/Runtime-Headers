@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (void)unlock;
- (void)setName:(id)a0;
- (void)lock;
- (BOOL)tryLock;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)name;
- (id)init;

@end
