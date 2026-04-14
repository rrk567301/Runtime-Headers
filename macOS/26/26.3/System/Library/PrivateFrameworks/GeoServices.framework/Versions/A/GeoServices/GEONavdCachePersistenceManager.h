@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (void)removeAllEntries;
- (void)tearDown;
- (id)init;
- (void)deleteFromDiskWithKey:(id)a0;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (id)readValueWithKey:(id)a0;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)numberOfEntries;
- (id)entryWithRowId:(long long)a0;
- (double)nextTimeStampForRefreshTimer;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;

@end
