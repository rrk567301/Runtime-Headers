@class GEOSQLiteDB, NSObject;
@protocol OS_dispatch_source;

@interface GEORequestResponsePersister : NSObject {
    GEOSQLiteDB *_db;
    NSObject<OS_dispatch_source> *_pruneTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (char)_runAllPruners:(id *)a0;
- (void)persistRequestTask:(id)a0 url:(id)a1 request:(id)a2;
- (char)_checkDbIsWriteable:(id *)a0;
- (void)_persistEvent:(id)a0;
- (char)_pruneDBToDefaultAge:(id *)a0;
- (char)_pruneDBToDefaultSize:(id *)a0;
- (char)_pruneDBToSize:(unsigned long long)a0 error:(id *)a1;
- (char)_pruneEntriesOlderThan:(id)a0 error:(id *)a1;
- (void)_reschedulePruner;
- (unsigned int)_restoreOrphanedEntries:(id *)a0;
- (id)enumerateAllEntriesWithBlock:(id /* block */)a0;
- (id)enumerateEntriesInRange:(id)a0 withBlock:(id /* block */)a1;
- (id)enumerateEntriesOfType:(int)a0 inRange:(id)a1 withBlock:(id /* block */)a2;
- (id)enumerateEntriesOfType:(int)a0 withBlock:(id /* block */)a1;
- (id)findRequest:(id)a0 withBlock:(id /* block */)a1;
- (id)findResponse:(id)a0 withBlock:(id /* block */)a1;
- (unsigned long long)getTotalSize:(id *)a0;
- (id)initWritable:(char)a0;
- (void)persistResponseTask:(id)a0 error:(id)a1;
- (void)persistResponseTask:(id)a0 response:(id)a1;
- (void)persistResponseTaskCanceled:(id)a0;
- (char)pruneDBToDefaultAge:(id *)a0;
- (char)pruneDBToDefaultSize:(id *)a0;
- (char)pruneDBToSize:(unsigned long long)a0 error:(id *)a1;
- (char)pruneEntriesOlderThan:(id)a0 error:(id *)a1;
- (unsigned int)restoreOrphanedEntries:(id *)a0;
- (char)runAllPruners:(id *)a0;

@end
