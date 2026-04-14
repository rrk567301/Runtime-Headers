@class NSString;
@protocol UITextCursorAssertion;

@interface PUNSWindow : UINSWindow <PUNSWindow> {
    BOOL _toolbarWasShown;
    BOOL _mouseIsInContentArea;
    unsigned long long _previousStyleMask;
}

@property (retain, nonatomic) id<UITextCursorAssertion> hideCursorAssertion;
@property (retain, nonatomic) id<UITextCursorAssertion> nonBlinkingCursorAssertion;
@property (nonatomic) BOOL showsChrome;
@property (nonatomic) unsigned int hostedContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)isResizable;
- (void)performClose:(id)a0;
- (BOOL)_canMiniaturize;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)sendEvent:(id)a0;
- (void)toggleFullScreen:(id)a0;
- (void)setStyleMask:(unsigned long long)a0;
- (void)setInitialOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)performZoom:(id)a0;
- (void)zoom:(id)a0;
- (void)_tileLeft:(id)a0;
- (void)_zoomLeft:(id)a0;
- (void)_tileRight:(id)a0;
- (void)_zoomRight:(id)a0;
- (void)_toggleIPad:(id)a0;
- (void)_moveToDisplay:(id)a0;
- (void)_close:(id)a0;
- (void)_resizeWithEvent:(id)a0;
- (void)_showToolbar:(id)a0 animate:(BOOL)a1;
- (void)_hideToolbar:(id)a0 animate:(BOOL)a1;
- (BOOL)_canEnterFullScreenOrTileMode;
- (void)_maximizeTileToFillScreen;
- (BOOL)_validateZoom;
- (void)_changeWindowTileLocation:(id)a0;
- (void)_removeTileFromFullScreen:(id)a0;
- (BOOL)_validateTileChange;
- (BOOL)_shouldShowResizeCursor;
- (BOOL)view:(id)a0 acceptsFirstMouseEvent:(id)a1 initialKeyWindow:(id)a2;
- (id)_contextIdsForHitTesting;
- (void)setInitialSceneContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_postZoomNotification;
- (void)_makeKeyAndOrderFront;
- (void)_updateAffectsCursor;
- (void)_handleMouseEnteredNotification:(id)a0;
- (void)_handleMouseExitedNotification:(id)a0;
- (void)_remoteDidAdoptActiveAppearance;
- (void)_remoteDidResignActiveAppearance;
- (void)_remoteDidBecomeKey;
- (void)_remoteDidResignKey;
- (void)beginListeningToNotifications;

@end
