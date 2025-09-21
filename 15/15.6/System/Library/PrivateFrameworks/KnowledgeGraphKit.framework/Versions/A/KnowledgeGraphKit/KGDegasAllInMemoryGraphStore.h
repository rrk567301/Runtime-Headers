@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (char)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (char)destroyAtURL:(id)a0 error:(id *)a1;
+ (char)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)persistentStoreFileExtension;

- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (id)url;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)copyToURL:(id)a0 error:(id *)a1;
- (unsigned long long)graphVersion;
- (void)setGraphVersion:(unsigned long long)a0;
- (id)graphIdentifier;
- (char)addEdges:(id)a0 error:(id *)a1;
- (char)addNodes:(id)a0 error:(id *)a1;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;
- (char)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (char)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (char)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;

@end
