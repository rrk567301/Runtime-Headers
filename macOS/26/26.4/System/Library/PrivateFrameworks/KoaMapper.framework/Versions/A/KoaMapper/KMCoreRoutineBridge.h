@class NSString, KVItemMapper;

@interface KMCoreRoutineBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)_fetchLocationOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
