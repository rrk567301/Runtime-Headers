@interface MLDataConversionUtils : NSObject

+ (id)batchProviderFromEspressoDataProvider:(id)a0 neuralNetworkEngine:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)batchProviderFromMLComputeDataProvider:(id)a0 neuralNetworkEngine:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)espressoDataProviderFromBatchProvider:(id)a0 forPrediction:(char)a1 neuralNetworkEngine:(id)a2 error:(id *)a3;
+ (id)espressoDataProviderFromFeatureProvider:(id)a0 forPrediction:(char)a1 neuralNetworkEngine:(id)a2 error:(id *)a3;
+ (id)featureProviderFomMLComputeDataProvider:(id)a0 neuralNetworkEngine:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)featureProviderFromEspressoDataProvider:(id)a0 neuralNetworkEngine:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)mlComputeDataProviderFromBatchProvider:(id)a0 batchSize:(unsigned long long)a1 forPrediction:(char)a2 neuralNetworkEngine:(id)a3 error:(id *)a4;
+ (unsigned long long)mlComputeDataTypeSize:(long long)a0;
+ (char)populateEspressoShapeAndStridesFromInputShape:(id)a0 ndRepresentation:(char)a1 espressoShape:(id *)a2 espressoStrides:(id *)a3 error:(id *)a4;
+ (char)populateShapeAndStrideFor:(id)a0 inputShape:(id)a1 outputShape:(id *)a2 outputStrides:(id *)a3 error:(id *)a4;
+ (unsigned long long)sizeFromShape:(id)a0;
+ (id)stridesForShape:(id)a0;

@end
