@class NSMutableSet;

@interface PXCuratedLibraryAnimationTracker : NSObject

@property (class, readonly, nonatomic) PXCuratedLibraryAnimationTracker *sharedTracker;

@property (readonly, nonatomic) NSMutableSet *inFlightAnimations;

+ (void)_scrollAnimationOccurredWithContext:(struct { long long x0; long long x1; })a0 isBegin:(char)a1;
+ (void)scrollAnimationDidBeginWithScrollContext:(struct { long long x0; long long x1; })a0;
+ (void)scrollAnimationDidEndWithScrollContext:(struct { long long x0; long long x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (void)zoomLevelTransitionsDidEndEarly;
- (void)_zoomLevelTransitionOccurred:(id)a0 isPreparation:(char)a1 isBegin:(char)a2;
- (void)zoomLevelTransitionDidBegin:(id)a0;
- (void)zoomLevelTransitionDidEnd:(id)a0;
- (void)zoomLevelTransitionPreparationDidBegin:(id)a0;

@end
