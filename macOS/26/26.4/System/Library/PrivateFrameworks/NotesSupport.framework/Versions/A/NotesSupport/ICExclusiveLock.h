@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (id)name;
- (void)unlock;
- (void)setName:(id)a0;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)tryLock;
- (void)lock;
- (void)dealloc;

@end
