@class NSString, MPSCNNConvolutionDescriptor;

@interface VCPCNNMPSDataSource : NSObject <MPSCNNConvolutionDataSource> {
    unsigned int _dataType;
    MPSCNNConvolutionDescriptor *_descriptor;
    void *_kernelWeights;
    float *_biasTerms;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned int)dataType;
- (id)label;
- (id)descriptor;
- (void *)weights;
- (float *)biasTerms;
- (void)purge;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWith:(unsigned int)a0 convolutionDescriptor:(id)a1 kernelWeights:(void *)a2 biasTerm:(float *)a3;

@end
