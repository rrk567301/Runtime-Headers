@class NSString, CNContactStore, KVItemMapper;

@interface CKVContactStoreBridge : NSObject <CKVProviderDatasetBridge> {
    CNContactStore *_contactStore;
    KVItemMapper *_itemMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactFetchKeys;

- (id)init;
- (void).cxx_destruct;
- (long long)itemType;
- (id)initWithContactStore:(id)a0;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
