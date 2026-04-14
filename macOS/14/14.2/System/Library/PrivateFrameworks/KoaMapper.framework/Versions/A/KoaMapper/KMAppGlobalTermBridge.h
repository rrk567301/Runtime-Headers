@class NSString, KVItemMapper, NSURL;

@interface KMAppGlobalTermBridge : NSObject <KMProviderDatasetBridge> {
    NSString *_appId;
    KVItemMapper *_itemMapper;
    NSURL *_appIntentVocabURL;
    struct __CFBundle { } *_cfbundle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)itemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)initWithDeletedOriginAppId:(id)a0 itemMapper:(id)a1;
- (id)initWithOriginAppId:(id)a0 languageCode:(id)a1 itemMapper:(id)a2;

@end
