@class NSArray, NSObject;
@protocol CKVDonatorProvider;

@interface CKVDonateTask : NSObject {
    NSObject<CKVDonatorProvider> *_donatorProvider;
    NSObject *_bridge;
    double _timeout;
    BOOL _isMultiDataset;
}

@property (readonly, nonatomic) NSArray *derivativeTaskIds;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDonatorProvider:(id)a0 datasetBridge:(id)a1 timeout:(double)a2 derivativeTaskIds:(id)a3;
- (id)initWithDonatorProvider:(id)a0 datasetBridge:(id)a1 derivativeTaskIds:(id)a2 timeout:(double)a3;
- (id)initWithDonatorProvider:(id)a0 multiDatasetBridge:(id)a1 timeout:(double)a2;
- (void)runWithType:(unsigned short)a0 reason:(unsigned short)a1;
- (void)runWithType:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (void)_donateAllDatasets:(unsigned short)a0 withReason:(unsigned short)a1 completion:(id /* block */)a2;
- (void)_donateDataset:(id)a0 withType:(unsigned short)a1 reason:(unsigned short)a2 completion:(id /* block */)a3;
- (void)clearWithReason:(unsigned short)a0;
- (void)_clearAllDatasets;
- (void)_clearDataset:(id)a0;
- (id)_getProviderBridge;
- (id)modifiedItemIdsWithDatabaseSearcher:(id)a0;

@end
