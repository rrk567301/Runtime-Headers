@class SGMIFeatureStore;

@interface SGEntityStoreToFeatureStoreLockGuardedData : NSObject {
    SGMIFeatureStore *_sgmiFeatureStore;
}

- (void).cxx_destruct;
- (id)sgmiFeatureStore;
- (void)setSgmiFeatureStore:(id)a0;

@end
