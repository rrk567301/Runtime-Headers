@class MLNeuralNetworkEngine;
@protocol MLBatchProvider;

@interface MLComputeBatchDataSource : NSObject <MLComputeDataProvider>

@property (readonly, nonatomic) id<MLBatchProvider> batchProvider;
@property (readonly, nonatomic) MLNeuralNetworkEngine *nnEngine;
@property (readonly, nonatomic) char useForPrediction;
@property (nonatomic) unsigned long long batchSize;

- (void).cxx_destruct;
- (unsigned long long)numberOfBatches;
- (id)batchAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)initWithBatchProvider:(id)a0 batchSize:(unsigned long long)a1 forPrediction:(char)a2 neuralNetworkEngine:(id)a3 error:(id *)a4;
- (id)mlcDataSourceAtIndex:(long long)a0 error:(id *)a1;
- (unsigned long long)sizeOfBatchAtIndex:(unsigned long long)a0;

@end
