@class _PASLock;

@interface PPContactDiskCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)initWithPath:(id)a0;
- (void)mutateCacheWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)accessCacheWithBlock:(id /* block */)a0;

@end
