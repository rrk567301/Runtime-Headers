@class NSScrollView, NSTimer, NSTrackingArea, NSScrollerImp;
@protocol NSScrollerImpPairDelegate;

@interface NSScrollerImpPair : NSObject {
    NSScrollView *_scrollView;
    NSScrollerImp *_verticalScrollerImp;
    NSScrollerImp *_horizontalScrollerImp;
    long long _scrollerStyle;
    NSTimer *_overlayScrollerHideTimer;
    NSTrackingArea *_contentViewTrackingArea;
    struct CGPoint { double x; double y; } _lastMouseInContentPoint;
    struct { unsigned char isFlipped : 1; unsigned char wantsToFlashOverlayScrollers : 1; unsigned char windowIsVisible : 1; unsigned char inScrollGesture : 1; unsigned char scrollerKnobStyle : 2; unsigned char scrollerFlashPending : 1; unsigned char overlayScrollerStateLocked : 1; unsigned char inVertScroller : 1; unsigned char inHorzScroller : 1; unsigned char areScrollersCatchable : 1; unsigned char shouldFadeCaughtScroller : 1; unsigned int  : 20; } _flags;
}

@property (class, readonly) long long scrollerLayoutDirection;

@property (weak) NSScrollView *scrollView;
@property (weak) id<NSScrollerImpPairDelegate> delegate;
@property (retain) NSScrollerImp *verticalScrollerImp;
@property (retain) NSScrollerImp *horizontalScrollerImp;
@property (getter=isFlipped) BOOL flipped;
@property long long scrollerStyle;
@property long long scrollerKnobStyle;
@property (readonly) BOOL overlayScrollersShown;
@property (readonly, getter=isInScrollGesture) BOOL inScrollGesture;

+ (void)initialize;
+ (void)_scrollerStyleRecommendationChanged:(id)a0;
+ (void)_updateAllScrollerImpPairsForNewRecommendedScrollerStyle:(long long)a0;
+ (void)setSuppressScrollerFlash:(BOOL)a0 forDescendantsOfView:(id)a1;
+ (void)setSuppressScrollerFlash:(BOOL)a0 forDecendantsOfView:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)startLiveResize;
- (void)endLiveResize;
- (void)contentAreaScrolledInDirection:(struct CGPoint { double x0; double x1; })a0;
- (void)flashScrollers;
- (void)updateTrackingAreas;
- (void)beginScrollGesture;
- (void)contentAreaScrolled;
- (void)cancelScrollGesture;
- (void)endScrollGesture;
- (void)windowOrderedIn;
- (void)windowOrderedOut;
- (void)removedFromSuperview;
- (void)endTrackingInScrollerImp:(id)a0;
- (void)movedToNewWindow;
- (void)contentAreaDidHide;
- (void)contentAreaDidUnhide;
- (void)contentAreaDidResize;
- (void)hideOverlayScrollers;
- (void)lockOverlayScrollerState:(unsigned long long)a0;
- (void)unlockOverlayScrollerState;
- (BOOL)overlayScrollerStateIsLocked;
- (void)_addRemoveTrackingAreasAsNeeded;
- (void)_setOverlayScrollerState:(unsigned long long)a0 forScrollerImp:(id)a1 forceImmediately:(BOOL)a2;
- (void)_beginHideOverlayScrollers;
- (void)_cancelOverlayScrollerHideTimer;
- (void)_overlayScrollerHideTimerFired:(id)a0;
- (void)_rescheduleOverlayScrollerHideTimerWithDelay:(double)a0;
- (void)_updateOverlayScrollersStateWithReason:(id)a0 forcingVisibilityForHorizontalKnob:(long long)a1 verticalKnob:(long long)a2;
- (void)_updateOverlayScrollersStateWithReason:(id)a0 forceAtLeastKnobsVisible:(BOOL)a1;
- (void)_flashScrollersIfNewlyVisible;
- (void)_endScrollGestureWithCancel:(BOOL)a0;
- (void)mouseEnteredContentArea;
- (void)mouseMovedInContentArea;
- (void)mouseExitedContentArea;
- (void)contentAreaWillDraw;
- (BOOL)inScrollGesture;

@end
