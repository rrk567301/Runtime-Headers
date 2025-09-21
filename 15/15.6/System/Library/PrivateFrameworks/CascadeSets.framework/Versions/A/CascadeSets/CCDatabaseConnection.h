@class NSString, NSObject;
@protocol CCDatabase, BMAccessAssertion;

@interface CCDatabaseConnection : NSObject <CCDatabaseReadOnlyAccess, CCDatabaseReadWriteAccess> {
    NSObject<CCDatabase> *_db;
    char _inTransaction;
    id<BMAccessAssertion> _accessAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionToDatabaseAtURL:(id)a0 dataProtectionClass:(int)a1 openMode:(long long)a2 accessAssertion:(id)a3;
+ (id)readOnlyConnectionToDatabaseAtURL:(id)a0 accessAssertion:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)reset:(id *)a0;
- (char)openWithError:(id *)a0;
- (char)closeWithError:(id *)a0;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)cleanup:(id *)a0;
- (char)prepareWithError:(id *)a0;
- (char)_createTableWithRecordClass:(Class)a0 error:(id *)a1;
- (char)_getRowResultsOfSelect:(id)a0 outRows:(id *)a1 error:(id *)a2;
- (char)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)enumeratorForRowResultsOfSelect:(id)a0 error:(id *)a1;
- (char)executeCommand:(id)a0 error:(id *)a1;
- (char)executeCommand:(id)a0 error:(id *)a1 returningRow:(id *)a2;
- (id)initWithDatabase:(id)a0 accessAssertion:(id)a1;
- (int)rowsModified:(id *)a0;

@end
