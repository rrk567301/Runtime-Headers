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

- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (unsigned long long)graphVersion;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (id)url;
- (void)setGraphVersion:(unsigned long long)a0;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (id)graphIdentifier;
- (void)close;
- (void).cxx_destruct;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;

@end
