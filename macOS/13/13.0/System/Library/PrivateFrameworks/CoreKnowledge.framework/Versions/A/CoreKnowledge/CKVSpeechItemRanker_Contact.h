@class NSObject;
@protocol KVPriorRetriever;

@interface CKVSpeechItemRanker_Contact : CKVSpeechItemRanker {
    NSObject<KVPriorRetriever> *_priorRetriever;
}

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)addDataset:(id)a0;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithDatabase:(id)a0 priorRetriever:(id)a1;

@end
