@class TDSimpleArtworkRenditionSpec, TDFlattenedImageRenditionSpec;

@interface TDResolvedImageLayerReference : TDAbstractLayerReference

@property (retain, nonatomic) TDSimpleArtworkRenditionSpec *reference;
@property (retain, nonatomic) TDFlattenedImageRenditionSpec *stack;

@end
