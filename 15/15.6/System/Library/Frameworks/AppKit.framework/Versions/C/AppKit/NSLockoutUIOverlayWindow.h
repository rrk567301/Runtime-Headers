@class NSString, NSWindow;

@interface NSLockoutUIOverlayWindow : NSWindow <NSLockoutUIOverlayWindow> {
    NSWindow *_original;
    double _animationDuration;
    id /* block */ _pendingCompletionHandler;
    char _needToEngageMiniaturizedWindow;
    char _needToDisengageMiniaturizedWindow;
    char _engaged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)engaged;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (void)_doFullScreenCleanupForOrderOut;
- (id)initOverWindow:(id)a0;
- (void)_callOutPendingCompletionHandlerIfNeeded;
- (char)_canJoinFullScreenSpace:(unsigned long long)a0;
- (void)_changeKeyAndMainLimitedOK:(char)a0;
- (void)_didDeminiaturize:(id)a0;
- (void)_didExitFullScreen:(id)a0;
- (void)_didOrderOffScreen:(id)a0;
- (void)_didOrderOnScreen:(id)a0;
- (void)_disengageFullScreenWindowWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)_disengageMiniaturizedWindowWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)_disengageNormalWindowWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (long long)_effectiveOrderFrontAnimationTypeIfModal:(char)a0;
- (long long)_effectiveOrderOutAnimationTypeIfModal:(char)a0;
- (void)_engageFullScreenWindowWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)_engageMiniaturizedWindowWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)_engageNormalWindowWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (char)_hasActiveAppearance;
- (char)_joinTiledFullScreenSpace:(unsigned long long)a0 usingPosition:(unsigned long long)a1;
- (char)_wantsFullScreenCleanupOnOrderOut;
- (char)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (id)_windowTransformAnimationForOrdering:(long long)a0 animationType:(long long)a1 interruptingAnimation:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)disengageWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)engageWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })maxFullScreenContentSize;
- (struct CGSize { double x0; double x1; })minFullScreenContentSize;
- (id)original;
- (void)originalDidOrder:(long long)a0;
- (char)transitioning;

@end
