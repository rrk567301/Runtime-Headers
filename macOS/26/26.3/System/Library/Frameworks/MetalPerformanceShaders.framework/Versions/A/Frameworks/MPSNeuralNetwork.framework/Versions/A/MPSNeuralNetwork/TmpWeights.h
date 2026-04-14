@class NSString, MPSCNNConvolutionDescriptor;
@protocol MPSCNNConvolutionDataSource;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {
    id<MPSCNNConvolutionDataSource> _parentObj;
    MPSCNNConvolutionDescriptor *_convDesc;
    BOOL _hasBias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)dataType;
- (BOOL)load;
- (void)purge;
- (void *)weights;
- (id)descriptor;
- (id)label;
- (void)dealloc;
- (float *)biasTerms;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWeights:(id)a0 useBias:(BOOL)a1 desc:(id)a2;

@end
