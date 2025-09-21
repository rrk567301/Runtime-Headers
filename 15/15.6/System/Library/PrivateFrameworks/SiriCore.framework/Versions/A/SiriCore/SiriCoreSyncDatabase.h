@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject {
    NSString *_path;
    SiriCoreSQLiteDatabase *_db;
}

@property (nonatomic) char inTransaction;
@property (nonatomic) char debugMode;

+ (id)currentSyncDatabase;
+ (void)removeCurrentSyncDatabase;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (char)openWithError:(id *)a0;
- (char)prepare;
- (char)closeWithError:(id *)a0;
- (char)_executeStatement:(id)a0 error:(id *)a1;
- (char)beginTransactionWithError:(id *)a0;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)_insertSyncRec:(id)a0 intoTable:(id)a1 error:(id *)a2;
- (int)_countKey:(id)a0 fromTable:(id)a1 updatedAfter:(id)a2 error:(id *)a3;
- (char)_enumerateKey:(id)a0 updatedAfter:(id)a1 fromTable:(id)a2 usingBlock:(id /* block */)a3 error:(id *)a4;
- (int)countItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2;
- (int)countRemovalsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2;
- (int)countSentItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2;
- (char)donate:(id)a0 error:(id *)a1;
- (char)enumerateItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateRemovalsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateSentItemsOfKey:(id)a0 updatedAfter:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)markAsSent:(id)a0 error:(id *)a1;
- (char)remove:(id)a0 error:(id *)a1;
- (char)removeAllItemsOfKey:(id)a0 error:(id *)a1;
- (char)succeedOrRollbackOnFail:(id)a0 error:(id *)a1 whileExecuting:(id /* block */)a2;

@end
