@class CKVIntentVocabularyStoreManager, NSString, NSArray, CKVIntentVocabularyAuthorization, KVItemMapper;

@interface CKVIntentVocabularyDatasetBridge : NSObject <CKVProviderDatasetBridge> {
    NSString *_appId;
    NSArray *_intentSlots;
    CKVIntentVocabularyStoreManager *_storeManager;
    CKVIntentVocabularyAuthorization *_authorization;
    KVItemMapper *_itemMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)itemType;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithAppId:(id)a0 intentSlots:(id)a1 storeManager:(id)a2 authorization:(id)a3 itemMapper:(id)a4;

@end
