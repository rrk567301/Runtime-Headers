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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)load;
- (id)label;
- (id)descriptor;
- (unsigned int)dataType;
- (void *)weights;
- (float *)biasTerms;
- (void)purge;
- (id)initWithWeights:(id)a0 useBias:(BOOL)a1 desc:(id)a2;

@end
