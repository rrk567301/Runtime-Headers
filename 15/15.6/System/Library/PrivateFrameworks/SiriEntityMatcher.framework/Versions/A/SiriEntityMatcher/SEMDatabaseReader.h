@class NSString, SEMDatabaseConnection, SEMProvisionalResourceManager;

@interface SEMDatabaseReader : NSObject <SEMDatabaseReadOnlyAccess> {
    SEMDatabaseConnection *_connection;
    double _lifespan;
    SEMProvisionalResourceManager *_resourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerForDatabaseAtURL:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (char)deactivateWithError:(id *)a0;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (char)activateWithError:(id *)a0 operationBlock:(id /* block */)a1;
- (char)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 batchSize:(unsigned long long)a2 offset:(unsigned long long)a3 enumerateAll:(char)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (char)enumerateRowResultsOfSelect:(id)a0 batchSize:(unsigned long long)a1 offset:(unsigned long long)a2 enumerateAll:(char)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
- (id)initWithConnection:(id)a0 lifespan:(double)a1;

@end
