@class NSString, NSMutableDictionary, NSMapTable, PFSQLiteDatabaseConnection;

@interface _PFSQLiteArchiveReadonlyTransaction : NSObject <PFSQLiteAccessor> {
    PFSQLiteDatabaseConnection *_connection;
    BOOL _inTransaction;
    struct sqlite3 { } *_txDatabase;
    NSMutableDictionary *_queryCache;
    NSMapTable *_classToObjectMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (BOOL)inReadTransaction:(id /* block */)a0 error:(out id *)a1;
- (id)initWithDatabaseConnection:(id)a0 classToObjectMap:(id)a1 queryCache:(id)a2;
- (id)objectsOfClass:(Class)a0 column:(id)a1 predicate:(id)a2 limitOffset:(id)a3 orderedBy:(id)a4 error:(out id *)a5;
- (id)setupObjectDescriptorForClass:(Class)a0 expectedObjectDescriptor:(id)a1 error:(out id *)a2;
- (id)unarchiveObjectsOfClass:(Class)a0 error:(out id *)a1;
- (id)unarchiveObjectsOfClass:(Class)a0 predicate:(id)a1 error:(out id *)a2;
- (id)unarchiveObjectsOfClass:(Class)a0 predicate:(id)a1 limitOffset:(id)a2 orderedBy:(id)a3 error:(out id *)a4;

@end
