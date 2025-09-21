@class NSString, AXFApplicationManager;

@interface AXVMutableWindowSpace : AXVWindowSpace <AXFUserSessionObserverDelegate, AXFApplicationManagerDelegate>

@property (retain, nonatomic) AXFApplicationManager *_applicationManager;
@property (nonatomic) unsigned long long _levelBeforeAutoRaise;
@property (nonatomic) char _observingApplications;
@property (nonatomic) char _levelTemporarilyRaised;
@property (nonatomic) char _lockScreenActive;
@property (nonatomic) char _securityAgentActive;
@property (nonatomic) char _setupAssistantActive;
@property (nonatomic) unsigned long long level;
@property (nonatomic) char automaticallyRiseToVoiceOverLevelInLockScreen;
@property (nonatomic) char automaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent;
@property (nonatomic) char automaticallyRiseToSetupAssistantLevelDuringSetupAssistant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spaceWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (void)setLevel:(unsigned long long)a0;
- (void)applicationManager:(id)a0 didUpdateRunningApplications:(id)a1;
- (void)userSessionObserverFastUserSwitchBegan:(id)a0;
- (void)userSessionObserverFastUserSwitchEnded:(id)a0;
- (void)userSessionObserverScreenLocked:(id)a0;
- (void)userSessionObserverScreenUnlocked:(id)a0;
- (void)userSessionObserverSessionDidMoveOffConsole:(id)a0;
- (void)_raiseLevelTo:(unsigned long long)a0;
- (void)_restoreOriginalLevelIfNeeded;
- (char)_shouldObserveApplications;
- (char)_shouldRestoreOriginalLevel;
- (char)_shouldStartObservingApplications;
- (char)_shouldStopObservingApplications;
- (char)_shouldTemporarilyRaiseLevelToSetupAssistantLevel;
- (char)_shouldTemporarilyRaiseLevelToVoiceOverLevel;
- (void)_startOrStopObservingApplicationsIfNeeded;
- (void)_temporarilyRaiseLevelIfNeeded;

@end
