@class MPSCNNNeuron, NSData, MPSNNNeuronDescriptor;

@interface MPSCNNConvolutionDescriptor : NSObject <NSSecureCoding, NSCopying> {
    NSData *_batchNormalizationData;
    MPSCNNNeuron *_deprecated_neuron;
    unsigned long long _subPixelScaleFactor;
    BOOL _depthWiseConvolution;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long featureChannelsLayout;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) unsigned long long strideInPixelsX;
@property (nonatomic) unsigned long long strideInPixelsY;
@property (nonatomic) unsigned long long groups;
@property (nonatomic) unsigned long long dilationRateX;
@property (nonatomic) unsigned long long dilationRateY;
@property (retain, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor;
@property (retain, nonatomic) MPSCNNNeuron *neuron;

+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 neuronFilter:(id)a4;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 postFilters:(id)a4;

- (id)debugDescription;
- (void)setNeuronParameterA:(float)a0;
- (BOOL)hasBatchNormData;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 neuronFilter:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })neuronInfo;
- (void)setNeuronType:(int)a0 parameterA:(float)a1 parameterB:(float)a2;
- (void)encodeWithCoder:(id)a0;
- (void)setNeuronType:(int)a0;
- (float)neuronParameterA;
- (float)neuronParameterC;
- (int)neuronType;
- (float)neuronParameterB;
- (void)setNeuronParameterC:(float)a0;
- (id)init;
- (void)setBatchNormalizationParametersForInferenceWithMean:(const float *)a0 variance:(const float *)a1 gamma:(const float *)a2 beta:(const float *)a3 epsilon:(float)a4;
- (id)newDescriptorWithNeuronInfo:(struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })a0;
- (void)setNeuronType:(int)a0 parameterA:(float)a1 parameterB:(float)a2 parameterC:(float)a3;
- (void)setNeuronToPReLUWithParametersA:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setNeuronParameterB:(float)a0;
- (void)dealloc;

@end
