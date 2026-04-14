@class NSMutableDictionary, NSString, SCRSharedScreen, SCRApplication;

@interface SCRSharedScreenManager : NSObject <SCROutputManagerListener>

@property (nonatomic) unsigned int speechCaptureClientPort;
@property (retain, nonatomic) NSMutableDictionary *remoteIdToSharedScreenInfo;
@property (retain) SCRSharedScreen *activeSharedScreen;
@property (retain) SCRApplication *activeApp;
@property (retain) NSString *activeRemoteId;
@property BOOL viewerIsInReadOnlyMode;

+ (id)sharedManager;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)receiveCapturedOutput:(id)a0;
- (void)handleForwardedEvent:(id)a0;
- (BOOL)forwardEvent:(id)a0 withId:(id)a1 toRemoteId:(id)a2;
- (BOOL)onRemoteHighlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remoteId:(id)a1;
- (void)_forwardDefault:(id)a0 value:(id)a1 toSharedScreen:(id)a2;
- (id)_getCommandsDisallowedInReadOnlyMode;
- (id)_getDefaultsAllowedToSync;
- (id)_getFocusedSharedScreenInfoForRemoteId:(id)a0 forMethod:(id)a1;
- (void)_sendServerInShadowMode;
- (BOOL)_shouldEventBeHandledByViewer:(id)a0 serverInShadowMode:(BOOL)a1;
- (void)appFinishedProcessingEvent:(id)a0 handled:(BOOL)a1;
- (BOOL)dispatchEventToSharedScreen:(id)a0;
- (void)forwardAllDefaultsToRemoteId:(id)a0;
- (BOOL)forwardEventToViewerVoiceOver:(id)a0;
- (BOOL)forwardInteractingStatus:(BOOL)a0 toRemoteId:(id)a1;
- (void)highlightRectChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isInteractingWithSharedScreen;
- (void)leaveSharedScreen;
- (void)modalSessionEnabledChanged:(BOOL)a0;
- (BOOL)onRemoteCapturedOutput:(id)a0 remoteId:(id)a1;
- (BOOL)onRemoteEventReply:(id)a0 remoteId:(id)a1;
- (BOOL)onRemoteLeaveSharedScreenWithRemoteId:(id)a0;
- (BOOL)serverInShadowModeForRemoteId:(id)a0;
- (void)setElement:(id)a0 app:(id)a1 forRemoteId:(id)a2;
- (void)setRemoteControlFlag:(id)a0 value:(BOOL)a1;
- (BOOL)shouldEventBeHandledByViewer:(id)a0 forRemoteId:(id)a1;
- (BOOL)shouldEventStayOnDevice:(id)a0;
- (BOOL)startCapturingOutputWithClientPort:(unsigned int)a0;
- (BOOL)startControllingRemoteVoiceOverWithRemoteId:(id)a0 remoteName:(id)a1 clientPort:(unsigned int)a2;
- (BOOL)stopCapturingOutput;
- (BOOL)stopControllingRemoteVoiceOverWithRemoteId:(id)a0 clientPort:(unsigned int)a1;
- (BOOL)updateActiveSharedScreen:(id)a0;

@end
