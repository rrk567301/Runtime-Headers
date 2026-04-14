@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (id)persistentStoreFileExtension;

- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (void)close;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)commitTransactionWithError:(id *)a0;
- (id)initWithURL:(id)a0;
- (unsigned long long)graphVersion;
- (void).cxx_destruct;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (id)graphIdentifier;
- (id)url;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (void)setGraphVersion:(unsigned long long)a0;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;

@end
