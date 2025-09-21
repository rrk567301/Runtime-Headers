@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (void)tearDown;
- (long long)numberOfEntries;
- (id)readValueWithKey:(id)a0;
- (void)removeAllEntries;
- (id)init;
- (void)deleteFromDiskWithKey:(id)a0;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;
- (id)entryWithRowId:(long long)a0;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (double)nextTimeStampForRefreshTimer;
- (void).cxx_destruct;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;

@end
