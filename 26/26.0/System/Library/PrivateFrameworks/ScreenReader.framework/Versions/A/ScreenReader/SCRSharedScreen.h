@class NSString, SCRCTargetSelectorTimer, NSValue;

@interface SCRSharedScreen : SCRElement

@property (nonatomic) BOOL controllingRemote;
@property (nonatomic) BOOL modalSessionEnabled;
@property (nonatomic) int nextEventIndex;
@property (retain, nonatomic) NSString *pendingEventId;
@property (retain, nonatomic) SCRCTargetSelectorTimer *pendingEventTimer;
@property (nonatomic) int consecutiveInteractUpShiftSentCount;
@property (nonatomic) int consecutiveUnhandledInteractUpShiftReceivedCount;
@property (nonatomic) BOOL responsive;
@property (nonatomic) BOOL userEventSinceInteracting;
@property (nonatomic) BOOL didAnnounceHint;
@property (retain, nonatomic) NSValue *cachedHighlightRect;

- (BOOL)isInteractive;
- (void).cxx_destruct;
- (id)roleDescription;
- (void)_updateSelected;
- (void)onRemoteInteractUpShiftHandled:(id)a0;
- (BOOL)_handleEvent:(id)a0 userTriggered:(BOOL)a1;
- (BOOL)_isObserveMode;
- (void)_onPendingEventTimer;
- (void)_sendOverviewCommand;
- (BOOL)_setControllingRemote:(BOOL)a0;
- (void)addItemStatusToRequest:(id)a0;
- (BOOL)canHandleValueChange;
- (BOOL)canNavigateToChildren;
- (void)handleAttributeChange:(id)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)handleInterceptedEvent:(id)a0;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (void)onRemoteCapturedOutput:(id)a0;
- (void)onRemoteDisconnected;
- (void)onRemoteEventIdAck:(id)a0;
- (void)onRemoteHighlightRect:(id)a0;
- (void)onRemoteLeaveSharedScreen;
- (void)onRemoteModalSessionEnabled:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;

@end
