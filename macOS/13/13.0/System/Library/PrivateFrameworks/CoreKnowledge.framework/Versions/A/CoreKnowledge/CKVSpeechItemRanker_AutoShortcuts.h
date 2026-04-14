@class NSMutableDictionary;

@interface CKVSpeechItemRanker_AutoShortcuts : CKVSpeechItemRanker {
    NSMutableDictionary *_datasetDict;
}

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)addDataset:(id)a0;
- (id)datasets;
- (BOOL)hasDatasets;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
