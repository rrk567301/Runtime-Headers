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

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)initialize;
- (char)load;
- (char)respondsToSelector:(SEL)a0;
- (unsigned int)dataType;
- (id)descriptor;
- (id)label;
- (id)initWithDataSource:(id)a0;
- (void *)weights;
- (float *)biasTerms;
- (float *)lookupTableForUInt8Kernel;
- (void)purge;
- (void *)rangesForUInt8Kernel;
- (id)updateWithCommandBuffer:(id)a0 gradientState:(id)a1 sourceState:(id)a2;
- (char)updateWithGradientState:(id)a0 sourceState:(id)a1;
- (unsigned int)weightsQuantizationType;
- (char)appendBatchNorm:(id)a0;
- (char)appendNeuron:(const struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; } *)a0;
- (char)appendNeuronDescriptor:(id)a0;
- (char)hasBatchNorm;
- (struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })neuronInfo;

@end
