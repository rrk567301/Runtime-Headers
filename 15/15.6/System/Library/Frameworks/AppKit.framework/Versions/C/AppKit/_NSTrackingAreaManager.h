@class NSWindow;

@interface _NSTrackingAreaManager : NSObject

@property (class, readonly) Class defaultClass;

@property (readonly) Class viewHelperClass;
@property (weak) NSWindow *window;
@property char allowsCursorRectsWhenInactive;
@property (readonly) char hasValidCursorRects;
@property (readonly) char shouldShowCursorRects;
@property (readonly) char areCursorRectsEnabled;
@property (readonly) char shouldUpdateTrackingAreasDuringScrolling;

+ (void)initialize;
+ (void)_setCursorForCurrentMouseLocation;
+ (void)appKitWillManageEventLoop;
+ (char)areCursorRectsEnabled;
+ (id)convertEventToCursorUpdateIfNeeded:(id)a0;
+ (id)cursorRectCursor;
+ (void)disableCursorRects;
+ (void)discardTrackingAndCursorEventsIfNeeded;
+ (void)enableCursorRects;
+ (void)gdbDumpCursorStack;
+ (char)handleCursorRectEvent:(id)a0;
+ (void)installMenuTrackingObserver;
+ (char)isSpecialMenuTrackingArea:(id)a0;
+ (char)isTrackingIDInstalled:(long long)a0 wid:(long long)a1;
+ (void)resetCursorStack;
+ (void)restoreCursor;
+ (char)routeEnterExitEvent:(id)a0;
+ (void)trackingRegionID:(unsigned long long)a0 windowID:(unsigned int)a1 getTrackingAreaID:(long long *)a2 userData:(void **)a3;
+ (unsigned long long)trackingRegionIDForTrackingAreaID:(long long)a0 wid:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)_startMenuTrackingOfTrackingAreasIfNeeded;
- (void)activateTrackingRectsForApplicationActivation;
- (void)cursorUpdate:(id)a0;
- (void)deactivateTrackingRectsForApplicationDeactivation;
- (void)disableCursorRects;
- (void)disableTrackingArea:(id)a0;
- (void)disableTrackingRect:(long long)a0;
- (void)discardCursorRects;
- (id)discardCursorRectsForView:(id)a0;
- (void)discardEventsForTrackingArea:(id)a0;
- (void)discardTrackingRect:(long long)a0;
- (void)discardTrackingRects:(long long *)a0 count:(long long)a1;
- (void)displayCycleUpdateStructuralRegions;
- (void)enableCursorRects;
- (void)enableTrackingArea:(id)a0;
- (void)enableTrackingRect:(long long)a0;
- (void)gdbDumpCursorRects;
- (char)hasCursorRects;
- (char)hasCursorRectsForView:(id)a0;
- (void)invalidateCursorRectsForView:(id)a0;
- (void)invalidateCursorRectsForView:(id)a0 force:(char)a1;
- (void)invalidateCursorRectsForViewsWithNoTrackingAreas;
- (void)markCursorRectsForRemovedView:(id)a0;
- (void)menuTrackingTrackingAreaEvent:(id)a0 delayedArray:(id)a1;
- (void)moveTrackingArea:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)postInvalidCursorRects;
- (void)recursiveResetTrackingAreasToPending;
- (void)resetCursorRects;
- (char)routeEnterExitEvent:(id)a0;
- (void)setAreCursorRectsEnabled:(char)a0;
- (void)setCursorForMouseLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setTrackingAreasDirty;
- (long long)setTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inside:(char)a1 owner:(id)a2 userData:(void *)a3 useTrackingNum:(long long)a4;
- (void)setTrackingRects;
- (char)shouldDelayEventDuringEventBlockingTransition:(id)a0;
- (char)shouldResetCursorRects;
- (void)synchronizeConfigurationForTrackingArea:(id)a0;
- (long long)trackingAreaIDForTrackingArea:(id)a0;
- (void)updateCursorRectsDueToBecomingKey;
- (void)updateCursorRectsDueToBecomingVisible;
- (void)updateCursorRectsDueToResigningKey;
- (void)updateTrackingAreasDueToEndScrolling;
- (void)verifyTrackingRects;

@end
