@class NSString;
@protocol UITextCursorAssertion;

@interface PUNSWindow : UINSWindow <PUNSWindow> {
    char _toolbarWasShown;
    char _mouseIsInContentArea;
    unsigned long long _previousStyleMask;
}

@property (retain, nonatomic) id<UITextCursorAssertion> hideCursorAssertion;
@property (retain, nonatomic) id<UITextCursorAssertion> nonBlinkingCursorAssertion;
@property (nonatomic) char showsChrome;
@property (nonatomic) unsigned int hostedContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;

- (void).cxx_destruct;
- (char)_canMiniaturize;
- (void)_close:(id)a0;
- (void)_moveToDisplay:(id)a0;
- (char)_canEnterFullScreenOrTileMode;
- (void)_changeWindowTileLocation:(id)a0;
- (void)_hideToolbar:(id)a0 animate:(char)a1;
- (void)_maximizeTileToFillScreen;
- (void)_removeTileFromFullScreen:(id)a0;
- (void)_resizeWithEvent:(id)a0;
- (char)_shouldShowResizeCursor;
- (void)_showToolbar:(id)a0 animate:(char)a1;
- (void)_tileLeft:(id)a0;
- (void)_tileRight:(id)a0;
- (void)_toggleIPad:(id)a0;
- (char)_validateTileChange;
- (char)_validateZoom;
- (void)_zoomLeft:(id)a0;
- (void)_zoomRight:(id)a0;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (char)isResizable;
- (void)performClose:(id)a0;
- (void)performZoom:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setInitialOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setStyleMask:(unsigned long long)a0;
- (void)toggleFullScreen:(id)a0;
- (char)view:(id)a0 acceptsFirstMouseEvent:(id)a1 initialKeyWindow:(id)a2;
- (void)zoom:(id)a0;
- (id)_contextIdsForHitTesting;
- (void)setInitialSceneContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_handleMouseExitedNotification:(id)a0;
- (void)_remoteDidAdoptActiveAppearance;
- (void)_handleMouseEnteredNotification:(id)a0;
- (void)_makeKeyAndOrderFront;
- (void)_postZoomNotification;
- (void)_remoteDidBecomeKey;
- (void)_remoteDidResignActiveAppearance;
- (void)_remoteDidResignKey;
- (void)_updateAffectsCursor;
- (void)beginListeningToNotifications;

@end
