@class CKVIntentVocabularyStoreManager, CKVIntentVocabularyAuthorization, KVItemMapper;

@interface CKVIntentVocabularyMultiDatasetBridge : NSObject <CKVProviderMultiDatasetBridge> {
    CKVIntentVocabularyStoreManager *_storeManager;
    CKVIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}

- (id)init;
- (void).cxx_destruct;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)initWithStoreManager:(id)a0 authorization:(id)a1;

@end
