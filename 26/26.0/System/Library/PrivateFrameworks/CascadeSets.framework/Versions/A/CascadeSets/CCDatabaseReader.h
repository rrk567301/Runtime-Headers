@class NSString, CCDatabaseConnection;

@interface CCDatabaseReader : NSObject <CCDatabaseReadOnlyAccess> {
    CCDatabaseConnection *_connection;
    BOOL _inTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerForDatabaseAtURL:(id)a0 accessAssertion:(id)a1;

- (BOOL)reset:(id *)a0;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_commitAndCloseReadTransactionIfExists:(id *)a0;
- (BOOL)_openAndBeginReadTransactionIfNotExists:(id *)a0;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)enumeratorForRowResultsOfSelect:(id)a0 error:(id *)a1;
- (BOOL)firstResultOfSelect:(id)a0 outNumberValue:(id *)a1 error:(id *)a2;

@end
