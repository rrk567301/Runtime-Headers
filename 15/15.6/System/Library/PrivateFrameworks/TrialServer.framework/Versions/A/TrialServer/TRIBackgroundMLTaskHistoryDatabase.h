@class TRIDatabase;

@interface TRIBackgroundMLTaskHistoryDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (char)addRecord:(id)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (id)getAllAllocationStatusesForBMLTId:(id)a0 deploymentId:(int)a1 factorPackSetId:(id)a2;
- (char)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 block:(id /* block */)a2;
- (char)enumerateRecordsNewerThanDate:(id)a0 block:(id /* block */)a1;
- (char)expireRecordsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1;

@end
