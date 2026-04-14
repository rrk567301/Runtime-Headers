@class NSWindow;

@interface _NSTrackingAreaManager : NSObject

@property (class, readonly) Class defaultClass;

@property (readonly) Class viewHelperClass;
@property (weak) NSWindow *window;
@property BOOL allowsCursorRectsWhenInactive;
@property (readonly) BOOL hasValidCursorRects;
@property (readonly) BOOL shouldShowCursorRects;
@property (readonly) BOOL areCursorRectsEnabled;
@property (readonly) BOOL shouldUpdateTrackingAreasDuringScrolling;

+ (void)initialize;
+ (void)resetCursorStack;
+ (id)cursorRectCursor;
+ (void)restoreCursor;
+ (void)disableCursorRects;
+ (void)enableCursorRects;
+ (BOOL)areCursorRectsEnabled;
+ (BOOL)handleCursorRectEvent:(id)a0;
+ (void)gdbDumpCursorStack;
+ (void)discardTrackingAndCursorEventsIfNeeded;
+ (BOOL)routeEnterExitEvent:(id)a0;
+ (id)convertEventToCursorUpdateIfNeeded:(id)a0;
+ (unsigned long long)trackingRegionIDForTrackingAreaID:(long long)a0 wid:(unsigned int)a1;
+ (void)trackingRegionID:(unsigned long long)a0 windowID:(unsigned int)a1 getTrackingAreaID:(long long *)a2 userData:(void **)a3;
+ (BOOL)isTrackingIDInstalled:(long long)a0 wid:(long long)a1;
+ (void)_setCursorForCurrentMouseLocation;
+ (BOOL)isSpecialMenuTrackingArea:(id)a0;
+ (void)installMenuTrackingObserver;

- (id)init;
- (void).cxx_destruct;
- (void)resetCursorRects;
- (id)initWithWindow:(id)a0;
- (void)disableCursorRects;
- (void)enableCursorRects;
- (BOOL)routeEnterExitEvent:(id)a0;
- (void)setTrackingRects;
- (void)moveTrackingArea:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setTrackingAreasDirty;
- (void)enableTrackingArea:(id)a0;
- (void)disableTrackingArea:(id)a0;
- (void)activateTrackingRectsForApplicationActivation;
- (void)deactivateTrackingRectsForApplicationDeactivation;
- (long long)setTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inside:(BOOL)a1 owner:(id)a2 userData:(void *)a3 useTrackingNum:(long long)a4;
- (void)discardTrackingRects:(long long *)a0 count:(long long)a1;
- (void)discardTrackingRect:(long long)a0;
- (void)disableTrackingRect:(long long)a0;
- (void)enableTrackingRect:(long long)a0;
- (void)synchronizeConfigurationForTrackingArea:(id)a0;
- (long long)trackingAreaIDForTrackingArea:(id)a0;
- (void)verifyTrackingRects;
- (void)recursiveResetTrackingAreasToPending;
- (void)postInvalidCursorRects;
- (id)discardCursorRectsForView:(id)a0;
- (void)invalidateCursorRectsForView:(id)a0 force:(BOOL)a1;
- (void)markCursorRectsForRemovedView:(id)a0;
- (BOOL)hasCursorRectsForView:(id)a0;
- (BOOL)hasCursorRects;
- (BOOL)shouldResetCursorRects;
- (void)updateCursorRectsDueToBecomingVisible;
- (void)updateCursorRectsDueToBecomingKey;
- (void)updateCursorRectsDueToResigningKey;
- (void)discardCursorRects;
- (void)invalidateCursorRectsForView:(id)a0;
- (void)setCursorForMouseLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)cursorUpdate:(id)a0;
- (void)gdbDumpCursorRects;
- (void)discardEventsForTrackingArea:(id)a0;
- (void)displayCycleUpdateStructuralRegions;
- (void)_startMenuTrackingOfTrackingAreasIfNeeded;
- (void)menuTrackingTrackingAreaEvent:(id)a0 delayedArray:(id)a1;
- (void)updateTrackingAreasDueToEndScrolling;
- (void)invalidateCursorRectsForViewsWithNoTrackingAreas;
- (void)setAreCursorRectsEnabled:(BOOL)a0;
- (BOOL)shouldDelayEventDuringEventBlockingTransition:(id)a0;

@end
