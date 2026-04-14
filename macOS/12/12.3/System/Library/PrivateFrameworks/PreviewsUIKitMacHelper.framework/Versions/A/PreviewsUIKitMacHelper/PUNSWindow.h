@class NSString;

@interface PUNSWindow : UINSWindow <PUNSWindow> {
    BOOL _toolbarWasShown;
    unsigned long long _previousStyleMask;
}

@property (readonly, nonatomic) BOOL remoteIsFirstResponder;
@property (nonatomic) BOOL showsChrome;
@property (nonatomic) unsigned int hostedContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isResizable;
- (void)performClose:(id)a0;
- (BOOL)_canMiniaturize;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)sendEvent:(id)a0;
- (void)toggleFullScreen:(id)a0;
- (void)setStyleMask:(unsigned long long)a0;
- (void)performZoom:(id)a0;
- (void)zoom:(id)a0;
- (void)_tileLeft:(id)a0;
- (void)_zoomLeft:(id)a0;
- (void)_tileRight:(id)a0;
- (void)_zoomRight:(id)a0;
- (void)_toggleIPad:(id)a0;
- (void)_moveToDisplay:(id)a0;
- (void)_close:(id)a0;
- (void)_showToolbar:(id)a0 animate:(BOOL)a1;
- (void)_hideToolbar:(id)a0 animate:(BOOL)a1;
- (BOOL)_canEnterFullScreenOrTileMode;
- (void)_maximizeTileToFillScreen;
- (BOOL)_validateZoom;
- (void)_changeWindowTileLocation:(id)a0;
- (void)_removeTileFromFullScreen:(id)a0;
- (BOOL)_validateTileChange;
- (BOOL)view:(id)a0 acceptsFirstMouseEvent:(id)a1 initialKeyWindow:(id)a2;
- (id)_contextIdsForHitTesting;
- (void)_remoteDidBecomeFirstResponder;
- (void)_remoteDidResignFirstResponder;

@end
