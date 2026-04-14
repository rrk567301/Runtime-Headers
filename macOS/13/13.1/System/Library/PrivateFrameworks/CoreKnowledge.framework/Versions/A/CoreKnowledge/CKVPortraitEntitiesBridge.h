@class NSString, KVItemMapper, NSNumber;

@interface CKVPortraitEntitiesBridge : NSObject <CKVProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
    NSNumber *_alternativeItemIdKey;
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

@end
