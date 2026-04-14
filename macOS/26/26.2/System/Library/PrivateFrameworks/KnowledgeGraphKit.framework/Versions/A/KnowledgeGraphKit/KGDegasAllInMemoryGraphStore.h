@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)persistentStoreFileExtension;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;

- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (void)close;
- (id)initWithURL:(id)a0;
- (void)setGraphVersion:(unsigned long long)a0;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (id)url;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (unsigned long long)graphVersion;
- (id)graphIdentifier;
- (BOOL)beginTransactionWithError:(id *)a0;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;

@end
