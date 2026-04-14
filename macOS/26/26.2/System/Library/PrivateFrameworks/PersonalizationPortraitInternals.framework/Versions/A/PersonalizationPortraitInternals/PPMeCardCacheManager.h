@class _PASLock;

@interface PPMeCardCacheManager : NSObject {
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (void)accessCacheWithBlock:(id /* block */)a0;
- (id)initWithPath:(id)a0;
- (id)init;

@end
