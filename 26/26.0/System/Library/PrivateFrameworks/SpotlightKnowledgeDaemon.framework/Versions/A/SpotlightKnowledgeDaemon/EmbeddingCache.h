@class NSString;

@interface EmbeddingCache : NSObject {
    BOOL _unlimitedCapacity;
    int _parentDirFd;
    int _indexType;
    struct datastore_info { } *_dsi;
    NSString *_dbName;
    struct { unsigned int hitCount; unsigned int missCount; } _stats;
    struct fd_obj { } *_stringFd;
}

@property struct { unsigned int _data[100000]; int index; } fifo;

+ (id)embeddingCaches;
+ (id)initInstanceWithType:(int)a0 name:(id)a1;
+ (id)initInstanceWithType:(int)a0 name:(id)a1 cacheOptions:(long long)a2;
+ (id)sharedInstanceWithType:(int)a0;

- (unsigned int)itemCount;
- (void)flush;
- (void).cxx_destruct;
- (id)get:(const char *)a0;
- (unsigned int)hitRate;
- (void)closeAndDeleteStore:(id)a0;
- (id)dbFetchValueWithKey:(long long)a0;
- (BOOL)dbWriteValueWithKey:(long long)a0 data:(const void *)a1 dataLen:(int)a2;
- (void)deleteFromDb:(unsigned int)a0;
- (void)deleteFromDbForOid:(long long)a0;
- (id)get:(const char *)a0 bundle:(const char *)a1;
- (id)initWithParentFd:(int)a0 indexType:(int)a1 dbName:(id)a2;
- (id)initWithParentFd:(int)a0 indexType:(int)a1 dbName:(id)a2 cacheOptions:(long long)a3;
- (void)populateFifoStore;
- (BOOL)put:(const char *)a0 value:(id)a1;
- (BOOL)put:(const char *)a0 value:(id)a1 bundle:(const char *)a2;
- (void)setProtectionClassForFolder:(int)a0 protectionClass:(int)a1;

@end
