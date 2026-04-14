@class TDTemplateRenderingMode;

@interface TDSimpleArtworkElementProduction : TDElementProduction

@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;
@property (nonatomic) BOOL optOutOfThinning;
@property (nonatomic) BOOL isFlippable;
@property (nonatomic) BOOL preservesVectorRepresentation;
@property (nonatomic) BOOL recognitionImage;
@property (nonatomic) short autoscalingType;

- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;
- (id)associatedFileModificationDateWithDocument:(id)a0;

@end
