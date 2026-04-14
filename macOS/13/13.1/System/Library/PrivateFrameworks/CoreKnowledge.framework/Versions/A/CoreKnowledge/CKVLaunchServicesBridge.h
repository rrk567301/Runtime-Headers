@class NSString, KVItemMapper, NSDictionary;

@interface CKVLaunchServicesBridge : NSObject <CKVProviderDatasetBridge> {
    unsigned long long _options;
    KVItemMapper *_itemMapper;
    NSDictionary *_additionalFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)itemType;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithFetchOptions:(unsigned long long)a0 settings:(id)a1;
- (BOOL)_checkAppValidity:(id)a0 options:(unsigned long long)a1;
- (id)_appEnumerator;

@end
