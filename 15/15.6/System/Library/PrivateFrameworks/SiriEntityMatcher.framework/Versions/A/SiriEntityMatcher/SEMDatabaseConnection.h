@class NSString, NSObject;
@protocol SEMDatabase;

@interface SEMDatabaseConnection : NSObject <SEMDatabaseReadOnlyAccess, SEMDatabaseReadWriteAccess> {
    NSObject<SEMDatabase> *_db;
    char _inTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionToDatabaseAtURL:(id)a0 dataProtectionClass:(int)a1 openMode:(long long)a2;
+ (id)readOnlyConnectionToDatabaseAtURL:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (char)openWithError:(id *)a0;
- (char)closeWithError:(id *)a0;
- (char)exists;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)cleanup:(id *)a0;
- (char)_createTableWithRecordClass:(Class)a0 error:(id *)a1;
- (char)_getRowResultsOfSelect:(id)a0 outRows:(id *)a1 error:(id *)a2;
- (char)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (char)executeCommand:(id)a0 error:(id *)a1;
- (char)executeCommand:(id)a0 error:(id *)a1 returningRow:(id *)a2;
- (int)rowsModified:(id *)a0;
- (char)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 batchSize:(unsigned long long)a2 offset:(unsigned long long)a3 enumerateAll:(char)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (char)enumerateRowResultsOfSelect:(id)a0 batchSize:(unsigned long long)a1 offset:(unsigned long long)a2 enumerateAll:(char)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
- (char)prepareFTSWithError:(id *)a0;

@end
