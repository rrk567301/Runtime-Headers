@interface GKReporter : NSObject

@property (nonatomic) double authenticateResponseTimestamp;
@property (nonatomic) double inviteeUILaunchTimestamp;
@property (nonatomic) double connectingDevicesTimestamp;
@property (nonatomic) double programaticInviteTimestamp;
@property (nonatomic) double appLaunchTimestamp;
@property (nonatomic) double totalInviteReceivedTimestamp;
@property (nonatomic) double messageInviteProcessingTimestamp;
@property (nonatomic) double currentRealtimeMatchPersistenceTimestamp;

+ (id)reporter;

- (void)reportAuthenticateResponseDuration;
- (void)recordInviteeUILaunchTimestamp;
- (BOOL)isTimeSpanValid:(double)a0 maxDuration:(double)a1;
- (void)reportEvent:(id)a0 type:(id)a1 adamID:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 count:(long long)a2;
- (void)reportInviteeUILaunchDuration;
- (void)reportEvent:(id)a0 type:(id)a1 payload:(id)a2;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)reportMessageInviteProcessingDuration;
- (void)reportEvent:(id)a0 type:(id)a1 bundleID:(id)a2;
- (void)reportOnboardingEventForType:(id)a0 withStartTimestamp:(double)a1 refApp:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1;
- (void)reportConnectingDevicesDuration;
- (void)reportEvent:(id)a0 reportable:(id)a1;
- (void)reportCurrentRealtimeMatchPersistenceDuration;
- (void)recordAuthenticateResponseTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1 friendsPlayedThisGame:(id)a2;
- (void)recordMessageInviteProcessingTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1 inboxFriendRequestCount:(long long)a2;
- (void)recordConnectingDevicesTimestamp;
- (void)reportEvent:(id)a0 eventType:(id)a1 duration:(double)a2 refApp:(id)a3;
- (void)reportEvent:(id)a0 target:(id)a1 keyPath:(id)a2;
- (void)reportTotalInviteReceivedDuration;
- (void)reportEvent:(id)a0 type:(id)a1 startTime:(id)a2 refApp:(id)a3;
- (void)reportScreenTimeEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportProgramaticInviteDuration;
- (void)reportEvent:(id)a0 type:(id)a1 scoreRank:(id)a2;
- (void)reportAppLaunchDuration;
- (void)recordProgramaticInviteTimestamp;
- (void)reportEvent:(id)a0 payload:(id)a1;
- (void)reportDurationForEvent:(id)a0 eventType:(id)a1 withStartTimestamp:(double)a2;
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1 startTime:(id)a2;
- (void)reportPlayerAuthenticationFailure:(id)a0;

@end
