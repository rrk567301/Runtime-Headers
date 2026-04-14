@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (void)tearDown;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;
- (void)removeAllEntries;
- (long long)numberOfEntries;
- (void)deleteFromDiskWithKey:(id)a0;
- (id)entryWithRowId:(long long)a0;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)readValueWithKey:(id)a0;
- (id)init;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (double)nextTimeStampForRefreshTimer;

@end
