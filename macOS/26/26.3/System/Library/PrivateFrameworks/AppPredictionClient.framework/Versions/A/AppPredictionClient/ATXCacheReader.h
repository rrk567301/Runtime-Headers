@class _PASLock, NSString, NSObject;
@protocol OS_dispatch_source;

@interface ATXCacheReader : NSObject {
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}

- (void)_handleDirChange;
- (id)init;
- (id)initWithCacheBasePath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)readCacheFileForCachePath:(id)a0;
- (id)readCacheFileForConsumerSubtype:(unsigned char)a0;

@end
