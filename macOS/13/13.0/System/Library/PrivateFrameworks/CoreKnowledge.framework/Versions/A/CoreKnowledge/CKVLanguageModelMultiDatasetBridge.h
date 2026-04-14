@class CKVLocalization, KVItemBuilder;

@interface CKVLanguageModelMultiDatasetBridge : NSObject <CKVProviderMultiDatasetBridge> {
    CKVLocalization *_localization;
    KVItemBuilder *_builder;
}

- (void).cxx_destruct;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)initWithLocalization:(id)a0 itemBuilder:(id)a1;
- (id)_getAllLanguagesForFetch;

@end
