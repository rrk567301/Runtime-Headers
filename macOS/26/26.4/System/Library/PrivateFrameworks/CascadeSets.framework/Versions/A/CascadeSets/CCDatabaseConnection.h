@class NSString, NSObject;
@protocol CCDatabase, BMAccessAssertion;

@interface CCDatabaseConnection : NSObject <CCDatabaseReadOnlyAccess, CCDatabaseReadWriteAccess> {
    NSObject<CCDatabase> *_db;
    BOOL _inTransaction;
    id<BMAccessAssertion> _accessAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionToDatabaseAtURL:(id)a0 dataProtectionClass:(int)a1 openMode:(long long)a2 busyTimeout:(double)a3 accessAssertion:(id)a4;
+ (id)readOnlyConnectionToDatabaseAtURL:(id)a0 accessAssertion:(id)a1;

- (BOOL)reset:(id *)a0;
- (BOOL)openWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (void)dealloc;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)beginWriteTransactionWithError:(id *)a0;
- (BOOL)beginReadTransactionWithError:(id *)a0;
- (id)columnNamesOfTable:(id)a0 error:(id *)a1;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)enumeratorForRowResultsOfSelect:(id)a0 error:(id *)a1;
- (BOOL)executeCommand:(id)a0 error:(id *)a1;
- (BOOL)executeCommand:(id)a0 error:(id *)a1 returningRowBlock:(id /* block */)a2;
- (BOOL)firstResultOfSelect:(id)a0 outNumberValue:(id *)a1 error:(id *)a2;
- (id)initWithDatabase:(id)a0 accessAssertion:(id)a1;
- (int)rowsModified:(id *)a0;

@end
