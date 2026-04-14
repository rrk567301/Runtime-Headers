@class NSSet, NSMutableDictionary;

@interface CKVSpeechItemRanker_Link : CKVSpeechItemRanker {
    NSMutableDictionary *_oovRecords;
    NSMutableDictionary *_dynamicRecords;
    NSSet *_dynamicTermDenyList;
}

+ (BOOL)enumerateItemsWithError:(id *)a0 capacityAllocation:(id)a1 items:(id)a2 upperBounds:(id)a3 totalCapacity:(unsigned long long)a4 database:(id)a5 usingBlock:(id /* block */)a6;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)addDataset:(id)a0;
- (id)datasets;
- (BOOL)hasDatasets;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)itemCountsForRecords:(id)a0;
- (id)fairItemCountPerAppForRecords:(id)a0 itemCounts:(id)a1 threshold:(unsigned long long)a2;
- (BOOL)enumerateDynamicItemsWithError:(id *)a0 capacityAllocation:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateOOVItemsWithError:(id *)a0 capacityAllocation:(id)a1 usingBlock:(id /* block */)a2;
- (id)allocateCapacity;
- (id)dynamicTermsDataset;
- (id)oovTermsDataset;

@end
