@interface AXMPhotoVisionSupport : NSObject

+ (id)_deniedVoiceOverSceneClassificationLabels;
+ (id)_deniedVoiceOverObjectClassificationLabels;
+ (id)processSceneClassifications:(id)a0 withOptions:(unsigned int)a1;
+ (id)localizedLabelForClassificationObservation:(id)a0;
+ (id)axmTaxonomyNodeForObjectObservation:(id)a0;
+ (BOOL)axmIsSceneClassId:(unsigned int)a0 childOfSceneClassId:(unsigned int)a1;
+ (id)findLeastCommonAncestorForSceneClassIds:(id)a0 withKnownAncestorSceneClassId:(unsigned int)a1;
+ (BOOL)_validatePhotosFormatSoftLinkSymbols;
+ (id)buildTaxonomyDescription;
+ (void)_addNode:(id)a0 toDescription:(id)a1 atLevel:(long long)a2;
+ (id)buildParentChainDescriptionForAllNodes;
+ (id)_collectLabelsIncludingLeafNodes:(BOOL)a0 nonLeafNodes:(BOOL)a1;
+ (id)buildGraphStatisticsDescription;
+ (id)leafNodeLabels;
+ (id)nonLeafNodeLabels;
+ (id)axmTaxonomyNodeForSceneTaxonomyNode:(id)a0;

@end
