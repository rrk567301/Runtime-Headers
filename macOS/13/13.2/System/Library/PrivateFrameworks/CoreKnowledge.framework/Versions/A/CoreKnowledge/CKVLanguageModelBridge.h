@class NSString, KVItemBuilder;

@interface CKVLanguageModelBridge : NSObject <CKVProviderDatasetBridge> {
    NSString *_languageCode;
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)itemType;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithLanguageCode:(id)a0 itemBuilder:(id)a1;
- (id)_getItemWithTokenID:(unsigned int)a0 dynamicToken:(id)a1 error:(id *)a2;

@end
