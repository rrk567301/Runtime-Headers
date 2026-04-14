@interface CKVSimulatedMultiDatasetBridge : NSObject <CKVProviderMultiDatasetBridge> {
    unsigned short _task;
}

- (id)init;
- (id)initWithTask:(unsigned short)a0;
- (void)enumerateAllDatasets:(unsigned long long *)a0 usingBlock:(id /* block */)a1;
- (id)datasetInfoSummaryListForTask;
- (id)profileDirectory;
- (id)profileFileName;
- (id)_createDatasetInfoSummary:(long long)a0 withOriginAppId:(id)a1;

@end
