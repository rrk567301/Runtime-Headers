@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (void)removeAllEntries;
- (void)tearDown;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (id)readValueWithKey:(id)a0;
- (id)entryWithRowId:(long long)a0;
- (void).cxx_destruct;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;
- (double)nextTimeStampForRefreshTimer;
- (long long)numberOfEntries;
- (void)deleteFromDiskWithKey:(id)a0;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (id)init;

@end
