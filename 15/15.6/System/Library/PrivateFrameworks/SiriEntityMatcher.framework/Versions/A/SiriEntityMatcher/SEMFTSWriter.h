@class SEMDatabaseConnection, NSMutableDictionary;

@interface SEMFTSWriter : NSObject {
    SEMDatabaseConnection *_database;
    NSMutableDictionary *_commandCache;
    char _inTransaction;
}

+ (char)_isIndexedFieldType:(unsigned short)a0;
+ (unsigned char)capabilityRequirementForItemType:(unsigned short)a0;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (char)clearWithError:(id *)a0;
- (char)cleanup:(id *)a0;
- (char)databaseExists;
- (char)_databaseExists;
- (char)_beginTransactionWithError:(id *)a0;
- (char)_deleteAllRecords:(id *)a0;
- (char)commitChanges:(id *)a0;
- (char)deleteExternalId:(id)a0 error:(id *)a1;
- (char)deleteExternalIds:(id)a0 error:(id *)a1;
- (id)initWithDatabaseURL:(id)a0 dataProtectionClass:(int)a1;
- (char)insertRecordsFromCascadeItem:(id)a0 originAppId:(id)a1 externalId:(id)a2 error:(id *)a3;
- (char)rollbackChanges:(id *)a0;

@end
