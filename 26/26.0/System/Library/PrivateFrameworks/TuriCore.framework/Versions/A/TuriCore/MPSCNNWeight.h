@class NSString, MPSCNNConvolutionDescriptor;

@interface MPSCNNWeight : NSObject <MPSCNNConvolutionDataSource> {
    MPSCNNConvolutionDescriptor *_desc;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _weight;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _bias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)load;
- (void)purge;
- (void)checkpoint;
- (id)descriptor;
- (void *)weights;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (unsigned int)dataType;
- (id)label;
- (float *)biasTerms;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)weightSize;
- (unsigned long long)biasSize;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 strideInPixelsX:(unsigned long long)a4 strideInPixelsY:(unsigned long long)a5 neuronType:(int)a6 neuronA:(float)a7 neuronB:(float)a8;

@end
