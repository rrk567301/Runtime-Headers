@class NSString, NSMutableArray;

@interface SGKeyValueCacheManager : NSObject {
    NSString *_basePath;
    NSMutableArray *_cacheFiles;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)replaceCacheOfType:(unsigned long long)a0 block:(id /* block */)a1;
- (void)deleteValueByRecordId:(id)a0;
- (void).cxx_destruct;
- (id)cacheOfType:(unsigned long long)a0;
- (void)deleteValueByRecordIdSet:(id)a0;
- (id)initWithBasePath:(id)a0;
- (id)initInMemory;
- (id)init;

@end
