@class NSString, MPSCNNConvolutionDescriptor;

@interface MPSCNNWeight : NSObject <MPSCNNConvolutionDataSource> {
    MPSCNNConvolutionDescriptor *_desc;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _weight;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _bias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)dataType;
- (id)label;
- (id)descriptor;
- (void *)weights;
- (float *)biasTerms;
- (void)purge;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)checkpoint;
- (id)initWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 inputFeatureChannels:(unsigned long long)a2 outputFeatureChannels:(unsigned long long)a3 strideInPixelsX:(unsigned long long)a4 strideInPixelsY:(unsigned long long)a5 neuronType:(int)a6 neuronA:(float)a7 neuronB:(float)a8;
- (unsigned long long)weightSize;
- (unsigned long long)biasSize;

@end
