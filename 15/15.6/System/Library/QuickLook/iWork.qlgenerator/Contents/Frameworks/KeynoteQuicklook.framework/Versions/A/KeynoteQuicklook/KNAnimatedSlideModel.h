@class NSMapTable, NSArray, KNPlaybackSession, NSMutableSet, KNTransitionRenderer, NSMutableArray, KNAnimatedSlideView;

@interface KNAnimatedSlideModel : NSObject {
    KNAnimatedSlideView *_ASV;
    NSMutableArray *_buildEvents;
    NSMapTable *_infoToArrayOfAnimatedBuildsMap;
    NSMapTable *_animatedBuildToRendererMap;
}

@property (readonly, nonatomic) NSArray *infos;
@property (readonly, nonatomic) unsigned long long buildEventCount;
@property (readonly, nonatomic) NSMutableArray *animatedBuilds;
@property (nonatomic) unsigned long long numberOfAddedEvents;
@property (readonly, nonatomic, getter=isFirstBuildEventAutomatic) char firstBuildEventAutomatic;
@property (readonly, nonatomic) KNTransitionRenderer *transitionRenderer;
@property (weak, nonatomic) KNPlaybackSession *session;
@property (readonly, nonatomic) NSMutableSet *ambientBuildRenderers;
@property (readonly, nonatomic) char isMetalSlide;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)eventsAtIndex:(unsigned long long)a0;
- (long long)inEventForInfo:(id)a0;
- (id)p_newImplicitAmbientBuildRendererWithDrawable:(id)a0 stageIndex:(long long)a1 buildChunk:(id)a2 startTime:(double)a3 eventStartTime:(double)a4 event:(long long)a5 animateAtEndOfPreviousBuild:(char)a6;
- (void)p_setRenderer:(id)a0 forAnimatedBuild:(id)a1;
- (id)p_newTransition;
- (id)previousRendererBeforeRenderer:(id)a0;
- (id)actionEffectForDrawable:(id)a0 atBeginningOfEvent:(long long)a1;
- (id)animatedBuildForInfo:(id)a0 aroundEvent:(long long)a1 isAtEndOfBuild:(char *)a2;
- (id)animatedBuildForInfo:(id)a0 atEvent:(long long)a1;
- (id)buildChunksForEventRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (double)durationForEventIndexes:(id)a0;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned long long)a0 ignoreInitialDelay:(char)a1 usingBlock:(id /* block */)a2;
- (void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)finalActionEffectForDrawable:(id)a0;
- (id)firstAnimatedBuildForInfo:(id)a0;
- (char)info:(id)a0 isVisibleDuringEvent:(long long)a1;
- (id)initWithBuildChunks:(id)a0 infos:(id)a1 session:(id)a2 animatedSlideView:(id)a3;
- (double)initialDelayForEventIndex:(unsigned long long)a0;
- (id)lastAnimatedBuildForInfo:(id)a0;
- (double)maxScaleFactorForDrawable:(id)a0;
- (id)nextAnimatedBuildForInfo:(id)a0 afterBuild:(id)a1;
- (id)nextRendererAfterRenderer:(id)a0;
- (long long)outEventForInfo:(id)a0;
- (void)p_addAmbientBuildRenderer:(id)a0;
- (id)p_animatedBuildForInfo:(id)a0 event:(long long)a1 buildIn:(char)a2;
- (id)p_animatedBuildsForInfo:(id)a0 animationType:(long long)a1 duringEvent:(long long)a2 time:(double)a3;
- (id)p_applyThemeCurvesToBuildAttributes:(id)a0;
- (void)p_checkIfSlideIsMetalCapableWithBuildChunks:(id)a0;
- (void)p_convertToBuildEvents:(id)a0;
- (id)p_createBuildAnimationRecords:(id)a0 info:(id)a1 event:(long long)a2 start:(double)a3 eventStart:(double)a4 animateAtEndOfPreviousBuild:(char)a5 previousAnimatedBuild:(id)a6 parentBuild:(id)a7;
- (Class)p_effectClassForEffect:(id)a0 animationType:(long long)a1 hasParentBuild:(char)a2;
- (id)p_getCurrentDocumentRoot;
- (void)p_insertInitialAmbientAnimations;
- (char)p_isEmphasisBuild:(id)a0;
- (char)p_isInfoInvalidWithImplicitAmbientAnimations:(id)a0;
- (long long)p_lastEventNumberForInfo:(id)a0 animationType:(long long)a1 defaultResult:(long long)a2;
- (id)p_previousAnimatedBuildOfType:(long long)a0 forInfo:(id)a1 priorToBuild:(id)a2;
- (Class)p_rendererClassForBuildChunk:(id)a0 parentBuild:(id)a1 effectClass:(Class *)a2;
- (Class)p_rendererClassForEffect:(id)a0 animationType:(long long)a1 drawable:(id)a2 parentBuild:(id)a3 effectClass:(Class *)a4;
- (char)p_shouldAnimateImplicitAmbientAnimatingDrawableAtFirstEvent:(id)a0;
- (void)p_sortAnimatedBuilds;
- (void)p_updatePreviousAndFinalAttributes;
- (void)p_updateVisibilityOnAnimatedBuild:(id)a0;
- (id)previousAnimatedBuildForInfo:(id)a0 priorToBuild:(id)a1;
- (id)previousBuildInForInfo:(id)a0 priorToBuild:(id)a1;
- (id)previousContentBuildForInfo:(id)a0 priorToBuild:(id)a1;
- (id)rendererForAnimatedBuild:(id)a0;
- (id)sortRenderers:(id)a0;
- (id)visibleInfosDuringEvent:(long long)a0;

@end
