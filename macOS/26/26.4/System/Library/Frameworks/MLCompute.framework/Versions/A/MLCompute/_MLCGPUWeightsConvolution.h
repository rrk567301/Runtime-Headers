@class MLCTensor, MLCConvolutionDescriptor, MLCActivationDescriptor, MPSCNNConvolutionDescriptor, NSString;

@interface _MLCGPUWeightsConvolution : NSObject <NSCopying, MPSCNNConvolutionDataSource>

@property (readonly, nonatomic) MPSCNNConvolutionDescriptor *descMPS;
@property (readonly, nonatomic) MLCConvolutionDescriptor *desc;
@property (readonly, weak, nonatomic) MLCTensor *weight;
@property (readonly, weak, nonatomic) MLCTensor *biasTerm;
@property (retain, nonatomic) MLCTensor *localWeight;
@property (retain, nonatomic) MLCTensor *localBiasTerm;
@property (readonly, nonatomic) MLCActivationDescriptor *neuronDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weightWithDescriptor:(id)a0 biasTerms:(id)a1 weights:(id)a2;
+ (id)weightWithDescriptor:(id)a0 biasTerms:(id)a1 weights:(id)a2 neuronDescriptor:(id)a3;

- (void *)weights;
- (void)purge;
- (unsigned int)weightsLayout;
- (id)descriptor;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)label;
- (void).cxx_destruct;
- (unsigned int)dataType;
- (float *)biasTerms;
- (unsigned int)kernelWeightsDataType;
- (id)initWithDescriptor:(id)a0 biasTerms:(id)a1 weights:(id)a2 neuronDescriptor:(id)a3;

@end
