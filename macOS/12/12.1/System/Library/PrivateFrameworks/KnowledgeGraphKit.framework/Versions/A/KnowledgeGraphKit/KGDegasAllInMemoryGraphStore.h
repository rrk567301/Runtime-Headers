@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (id)persistentStoreFileExtension;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;

- (id)initWithURL:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)url;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)rollbackTransaction;
- (unsigned long long)graphVersion;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (void)setGraphVersion:(unsigned long long)a0;
- (id)graphIdentifier;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;

@end
