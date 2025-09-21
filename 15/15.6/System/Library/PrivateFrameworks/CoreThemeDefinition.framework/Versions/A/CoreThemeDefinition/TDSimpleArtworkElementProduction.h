@class TDTemplateRenderingMode;

@interface TDSimpleArtworkElementProduction : TDElementProduction

@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;
@property (nonatomic) char optOutOfThinning;
@property (nonatomic) char isFlippable;
@property (nonatomic) char preservesVectorRepresentation;
@property (nonatomic) char recognitionImage;
@property (nonatomic) short autoscalingType;

- (id)associatedFileModificationDateWithDocument:(id)a0;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(char)a1;

@end
