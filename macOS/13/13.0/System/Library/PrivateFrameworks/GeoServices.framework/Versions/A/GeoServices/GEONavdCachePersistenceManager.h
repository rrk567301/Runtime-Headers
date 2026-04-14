@class NSObject, GEONavdCacheDBReader, GEONavdCacheDBWriter;
@protocol OS_dispatch_queue;

@interface GEONavdCachePersistenceManager : NSObject {
    GEONavdCacheDBWriter *_writer;
    GEONavdCacheDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (id)initWithPath:(id)a0 legacyPath:(id)a1;
- (void)_removeFileIfItExistsAtPath:(id)a0;
- (void)_removeOldFormatCacheFromPath:(id)a0;
- (void)_removeLegacyCacheFromPath:(id)a0;
- (double)_nextTimeStampForRefreshTimer;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)a0;
- (long long)_threadUnsafeRowIdOfKey:(id)a0;
- (long long)_rowIdOfKey:(id)a0;
- (id)_entryWithRowId:(long long)a0;
- (long long)_dumpToDiskWithKey:(id)a0 value:(id)a1;
- (id)_readValueWithKey:(id)a0;
- (void)_deleteRowWithRowId:(long long)a0;
- (void)_deleteFromDiskWithKey:(id)a0;
- (void)_enumerateAllEntriesWithHandler:(id /* block */)a0;
- (void)_enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (long long)_numberOfEntries;
- (void)_removeAllEntries;

@end
