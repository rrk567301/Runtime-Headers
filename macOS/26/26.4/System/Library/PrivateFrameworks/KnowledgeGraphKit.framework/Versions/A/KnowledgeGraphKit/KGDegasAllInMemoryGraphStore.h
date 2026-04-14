@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)persistentStoreFileExtension;

- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)beginTransactionWithError:(id *)a0;
- (id)initWithURL:(id)a0;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (void)setGraphVersion:(unsigned long long)a0;
- (id)graphIdentifier;
- (void).cxx_destruct;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (void)close;
- (id)url;
- (unsigned long long)graphVersion;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;

@end
