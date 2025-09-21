@class NSString, MPSCNNConvolutionDescriptor;
@protocol MPSCNNConvolutionDataSource;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {
    id<MPSCNNConvolutionDataSource> _parentObj;
    MPSCNNConvolutionDescriptor *_convDesc;
    char _hasBias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)load;
- (unsigned int)dataType;
- (id)descriptor;
- (id)label;
- (void *)weights;
- (float *)biasTerms;
- (void)purge;
- (id)initWithWeights:(id)a0 useBias:(char)a1 desc:(id)a2;

@end
