@class TSCH3DActiveLabelsTypeBounds, NSString, TSUNoCopyDictionary, TSUMutablePointerSet, TSCH3DLabelsRendererTransforms, TSCH3DGetBoundsPipeline;

@interface TSCH3DChartBoundsLayoutSceneDelegate : NSObject <TSCH3DSceneObjectDelegator, TSCH3DSceneDelegate, TSCH3DChartAllSceneObjectDelegate> {
    TSCH3DGetBoundsPipeline *_pipeline;
    TSCH3DLabelsRendererTransforms *_transforms;
    TSUNoCopyDictionary *_sceneObjectLabelsBounds;
    char _labelsHaveCache;
    char _labelsDidOverride;
    TSUMutablePointerSet *_debugCachedSceneObjects;
}

@property (retain, nonatomic) TSCH3DActiveLabelsTypeBounds *activeBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneDelegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)willBeginProcessingSceneObject:(id)a0;
- (char)willProcessElement:(id)a0 sceneObject:(id)a1;
- (char)willSubmitSceneObject:(id)a0 pipeline:(id)a1;
- (void)didEndProcessingSceneObject:(id)a0;
- (void)didGenerateShaderEffects:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(void *)a0 effects:(id)a1 sceneObject:(id)a2 pipeline:(id)a3;
- (void)didProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (void)didRunForScene:(id)a0 pipeline:(id)a1;
- (void)didSubmitSceneObject:(id)a0 pipeline:(id)a1;
- (void)didTransformElement:(id)a0 sceneObject:(id)a1;
- (id)interestedClasses;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)a0 boundsIndex:(long long)a1;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)a0 pipeline:(id)a1;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)a0 pipeline:(id)a1;
- (id)makeDelegateWithScene:(id)a0;
- (id)makeDelegateWithSceneObject:(id)a0 scene:(id)a1;
- (void)p_addAllActiveLabelsBounds;
- (void)p_extendProjectedBoundsForCachedLabelBounds:(id)a0 offset:(void *)a1;
- (char)renderPassDelayDisallowedForSceneObject:(id)a0 pipeline:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForElement:(id)a0 sceneObject:(id)a1;
- (struct ElementRenderPass { int x0; })renderPassForSceneObject:(id)a0;
- (void)setOffset:(void *)a0 labelType:(int)a1 boundsIndex:(long long)a2 forSceneObject:(id)a3;
- (void)updateExternalLabelAttribute:(id)a0 sceneObject:(id)a1 labelRenderInfo:(id)a2;
- (char)willProcessElements:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (char)willProcessSeries:(id)a0 sceneObject:(id)a1 pipeline:(id)a2;
- (char)willRenderElement:(id)a0 sceneObject:(id)a1;
- (void)willRunForScene:(id)a0 pipeline:(id)a1;
- (char)willSubmitElement:(id)a0 sceneObject:(id)a1;
- (char)willSubmitLabelForSceneObject:(id)a0 labelRenderInfo:(id)a1;
- (char)willSubmitLabelType:(int)a0 boundsIndex:(long long)a1 alignment:(unsigned long long)a2 elementIndex:(unsigned long long)a3 forSceneObject:(id)a4;
- (char)willUpdateElementEffectsStatesForElement:(id)a0 sceneObject:(id)a1;

@end
