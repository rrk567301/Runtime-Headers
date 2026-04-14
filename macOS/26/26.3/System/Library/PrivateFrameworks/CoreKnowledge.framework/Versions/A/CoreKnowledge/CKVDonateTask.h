@class NSObject;
@protocol CKVDonatorProvider;

@interface CKVDonateTask : NSObject {
    NSObject<CKVDonatorProvider> *_donatorProvider;
    NSObject *_bridge;
    double _timeout;
    BOOL _isMultiDataset;
    unsigned short _donateOptions;
}

- (BOOL)wasLastDonationAccepted;
- (void)_donateDataset:(id)a0 withType:(unsigned short)a1 reason:(unsigned short)a2 completion:(id /* block */)a3;
- (void)runWithType:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (id)lastDonationAcceptedDate;
- (id)init;
- (BOOL)_isIncrementalPreferred;
- (id)initWithDonatorProvider:(id)a0 multiDatasetBridge:(id)a1 timeout:(double)a2;
- (void)_donateAllDatasets:(unsigned short)a0 withReason:(unsigned short)a1 completion:(id /* block */)a2;
- (id)initWithDonatorProvider:(id)a0 fullDatasetBridge:(id)a1 timeout:(double)a2;
- (void).cxx_destruct;
- (void)runWithType:(unsigned short)a0 reason:(unsigned short)a1;
- (long long)_enumerateAndStreamFullDataset:(id)a0 fullStream:(id)a1;
- (id)initWithDonatorProvider:(id)a0 deltaDatasetBridge:(id)a1 timeout:(double)a2;
- (id)initWithDonatorProvider:(id)a0 datasetBridge:(id)a1 timeout:(double)a2 donateOptions:(unsigned short)a3;
- (id)_getProviderBridge;
- (long long)_enumerateAndStreamDeltaDataset:(id)a0 fullStream:(id)a1 incrementalStream:(id)a2;

@end
