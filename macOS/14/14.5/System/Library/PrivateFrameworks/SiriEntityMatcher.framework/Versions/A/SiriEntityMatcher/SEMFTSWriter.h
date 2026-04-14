@class SEMDatabaseConnection, NSMutableDictionary;

@interface SEMFTSWriter : NSObject {
    SEMDatabaseConnection *_database;
    NSMutableDictionary *_commandCache;
    BOOL _inTransaction;
}

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)clearWithError:(id *)a0;
- (BOOL)cleanup:(id *)a0;
- (BOOL)databaseExists;
- (BOOL)_databaseExists;
- (BOOL)_beginTransactionWithError:(id *)a0;
- (BOOL)_deleteAllRecords:(id *)a0;
- (BOOL)commitChanges:(id *)a0;
- (BOOL)deleteRecordId:(id)a0 error:(id *)a1;
- (BOOL)deleteRecordIds:(id)a0 error:(id *)a1;
- (id)initWithDatabaseURL:(id)a0 dataProtectionClass:(int)a1;
- (BOOL)insertRecordsFromItem:(id)a0 originAppId:(id)a1 recordId:(id)a2 error:(id *)a3;
- (BOOL)rollbackChanges:(id *)a0;

@end
