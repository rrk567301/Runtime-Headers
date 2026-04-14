@class _PASLock;

@interface PPContactDiskCacheManager : NSObject {
    _PASLock *_lock;
}

- (void)mutateCacheWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)accessCacheWithBlock:(id /* block */)a0;
- (id)initWithPath:(id)a0;
- (id)init;

@end
