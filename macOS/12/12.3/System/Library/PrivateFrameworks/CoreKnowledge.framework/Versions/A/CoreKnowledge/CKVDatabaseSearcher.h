@class CKVIndexManager;

@interface CKVDatabaseSearcher : NSObject {
    CKVIndexManager *_idxMgr;
}

+ (id)_datasetRecordForOriginApp:(id)a0 itemType:(long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)enumerateAllItemsOfDataset:(id)a0 database:(id)a1 batchSize:(unsigned long long)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
+ (BOOL)_enumerateItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 enumerateAll:(BOOL)a2 database:(id)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
+ (id)_datasetRowIdToRecordMap:(id)a0 error:(id *)a1;
+ (id)databaseSearcher;
+ (BOOL)enumerateAllItemsWithBatchSize:(unsigned long long)a0 database:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
+ (id)selectAllDatasets:(id)a0 error:(id *)a1;
+ (id)countDatasetItems:(id)a0 database:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithIndexManager:(id)a0;
- (BOOL)_enumerateResultsOfFTSSearch:(id)a0 searchCriteria:(id)a1 sortByRelevance:(BOOL)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (id)_selectItemRecordsWithRecordIds:(id)a0 databaseConnection:(id)a1 error:(id *)a2;
- (id)_selectAllItemRecordsWithOriginApp:(id)a0 itemType:(long long)a1 database:(id)a2 error:(id *)a3;
- (id)searchFTSInternalWithCriteria:(id)a0 sortByRelevance:(BOOL)a1 error:(id *)a2;
- (id)selectAllItemRecordsWithOriginApp:(id)a0 itemType:(long long)a1 error:(id *)a2;
- (BOOL)enumerateItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)computeAllDatasetStatistics;

@end
