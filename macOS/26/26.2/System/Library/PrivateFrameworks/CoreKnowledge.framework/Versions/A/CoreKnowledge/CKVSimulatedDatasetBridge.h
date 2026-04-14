@class NSString, KVDatasetInfo, NSArray;

@interface CKVSimulatedDatasetBridge : NSObject <KMProviderDatasetBridge> {
    KVDatasetInfo *_datasetInfo;
    NSArray *_items;
    unsigned short _cascadeItemType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (unsigned short)cascadeItemType;
- (BOOL)_processDataset:(id)a0;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithDataset:(id)a0;
- (id)originAppId;

@end
