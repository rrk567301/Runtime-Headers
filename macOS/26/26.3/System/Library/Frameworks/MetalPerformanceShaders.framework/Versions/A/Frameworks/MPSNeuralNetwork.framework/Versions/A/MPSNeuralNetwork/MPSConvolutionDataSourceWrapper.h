@class NSString, MPSCNNConvolutionDescriptor, NSObject, MPSNNNeuronDescriptor;
@protocol MPSCNNConvolutionDataSource;

@interface MPSConvolutionDataSourceWrapper : NSObject <MPSCNNConvolutionDataSource> {
    id<MPSCNNConvolutionDataSource> _dataSource;
    MPSCNNConvolutionDescriptor *_convolution;
    NSObject *_batchNorm;
    MPSNNNeuronDescriptor *_neuron;
    struct atomic<long> { struct __cxx_atomic_impl<long, std::__cxx_atomic_base_impl<long>> { _Atomic long long __a_value; } __a_; } _loadCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperForDataSource:(id)a0;

- (void)initialize;
- (unsigned int)dataType;
- (BOOL)load;
- (void)purge;
- (void *)weights;
- (id)descriptor;
- (void *)rangesForUInt8Kernel;
- (id)label;
- (float *)lookupTableForUInt8Kernel;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;
- (float *)biasTerms;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })neuronInfo;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)updateWithCommandBuffer:(id)a0 gradientState:(id)a1 sourceState:(id)a2;
- (BOOL)updateWithGradientState:(id)a0 sourceState:(id)a1;
- (unsigned int)weightsQuantizationType;
- (BOOL)appendBatchNorm:(id)a0;
- (BOOL)appendNeuron:(const struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; } *)a0;
- (BOOL)appendNeuronDescriptor:(id)a0;
- (BOOL)hasBatchNorm;

@end
