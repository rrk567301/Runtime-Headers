@class _PASLock, NSString, NSObject;
@protocol OS_dispatch_source;

@interface ATXCacheReader : NSObject {
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}

- (void)_handleDirChange;
- (void).cxx_destruct;
- (id)init;
- (id)readCacheFileForConsumerSubtype:(unsigned char)a0;
- (id)initWithCacheBasePath:(id)a0;
- (void)dealloc;
- (id)readCacheFileForCachePath:(id)a0;

@end
