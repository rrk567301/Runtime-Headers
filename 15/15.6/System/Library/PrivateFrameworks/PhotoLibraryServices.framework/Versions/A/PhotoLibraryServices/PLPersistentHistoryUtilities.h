@interface PLPersistentHistoryUtilities : NSObject

+ (id)fetchTransactionsSinceMarker:(id)a0 withFetchRequest:(id)a1 batchSize:(unsigned long long)a2 context:(id)a3 error:(id *)a4;
+ (id)transactionNumberFromToken:(id)a0;
+ (id)_executePersistentHistoryChangeRequest:(id)a0 withContext:(id)a1;
+ (id)_fetchSingleTransactionWithContext:(id)a0 sortAscending:(char)a1;
+ (id)archivedDataWithToken:(id)a0;
+ (char)deleteHistoryBeforeDate:(id)a0 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)a1 withContext:(id)a2 error:(id *)a3;
+ (char)deleteHistoryBeforeDate:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (char)deleteHistoryBeforeToken:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (long long)fetchApproximateHistoryRecordCountInLibrary:(id)a0 error:(id *)a1;
+ (id)fetchTransactionCountSinceToken:(id)a0 withContext:(id)a1 error:(id *)a2;
+ (id)newestTransactionWithContext:(id)a0;
+ (id)oldestTransactionWithContext:(id)a0;
+ (id)unarchiveTokenWithData:(id)a0;

@end
