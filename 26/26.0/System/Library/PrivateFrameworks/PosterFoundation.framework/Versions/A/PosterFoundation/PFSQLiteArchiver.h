@class NSString, NSMapTable, NSMutableDictionary, PFSQLiteDatabaseConnection;

@interface PFSQLiteArchiver : NSObject <PFSQLiteDatabaseConnectionObserver, PFSQLiteMutator> {
    BOOL _shouldInvalidateOnDealloc;
    NSMapTable *_classToObjectMap;
    NSMutableDictionary *_queryCache;
}

@property (readonly, nonatomic) PFSQLiteDatabaseConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archiverForDatabaseAtURL:(id)a0 sqliteOptions:(int)a1 dataProtectionClass:(unsigned long long)a2 error:(out id *)a3;

- (void)dealloc;
- (id)init;
- (void)sqliteDatabaseConnectionWillClose:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteObject:(id)a0 error:(out id *)a1;
- (BOOL)archiveObject:(id)a0 error:(out id *)a1;
- (BOOL)replaceObject:(id)a0 withObject:(id)a1 error:(out id *)a2;
- (BOOL)access:(id /* block */)a0 error:(out id *)a1;
- (BOOL)archiveObjects:(id)a0 error:(out id *)a1;
- (BOOL)deleteObjectsOfClass:(Class)a0 predicate:(id)a1 error:(out id *)a2;
- (id)initWithDatabaseConnection:(id)a0 error:(out id *)a1;
- (BOOL)mutate:(id /* block */)a0 error:(out id *)a1;
- (id)objectsOfClass:(Class)a0 column:(id)a1 predicate:(id)a2 limitOffset:(id)a3 orderedBy:(id)a4 error:(out id *)a5;
- (BOOL)setupForDescriptor:(id)a0 forClass:(Class)a1 error:(out id *)a2;
- (id)unarchiveObjectsOfClass:(Class)a0 error:(out id *)a1;
- (id)unarchiveObjectsOfClass:(Class)a0 predicate:(id)a1 error:(out id *)a2;
- (id)unarchiveObjectsOfClass:(Class)a0 predicate:(id)a1 limitOffset:(id)a2 orderedBy:(id)a3 error:(out id *)a4;
- (BOOL)updateObject:(id)a0 error:(out id *)a1;

@end
