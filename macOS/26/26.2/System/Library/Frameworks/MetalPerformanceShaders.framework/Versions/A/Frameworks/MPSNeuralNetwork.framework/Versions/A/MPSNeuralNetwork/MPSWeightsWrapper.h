@class NSString, NSData, MPSCNNConvolutionDescriptor;
@protocol MPSCNNConvolutionDataSource, MPSCNNBatchNormalizationDataSource;

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource> {
    id<MPSCNNBatchNormalizationDataSource> _dataSource;
    id<MPSCNNConvolutionDataSource> _source;
    struct NeuronInfo { int type; float a; float b; float c; NSData *aData; } _info;
    MPSCNNConvolutionDescriptor *_descriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)load;
- (unsigned int)dataType;
- (void)purge;
- (float *)biasTerms;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float *)lookupTableForUInt8Kernel;
- (id)descriptor;
- (void *)weights;
- (id)label;
- (void *)rangesForUInt8Kernel;
- (void)dealloc;
- (id)initWithSource:(id)a0 neuronInfo:(struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })a1 batchNorm:(id)a2;

@end
