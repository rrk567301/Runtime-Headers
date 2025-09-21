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

- (void)reportEvent:(id)a0 payload:(id)a1;
- (void)reportConnectingDevicesDuration;
- (void)reportProgramaticInviteDuration;
- (char)isTimeSpanValid:(double)a0 maxDuration:(double)a1;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)recordAuthenticateResponseTimestamp;
- (void)recordConnectingDevicesTimestamp;
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;
- (void)recordInviteeUILaunchTimestamp;
- (void)recordMessageInviteProcessingTimestamp;
- (void)recordProgramaticInviteTimestamp;
- (void)reportAppLaunchDuration;
- (void)reportAuthenticateResponseDuration;
- (void)reportCurrentRealtimeMatchPersistenceDuration;
- (void)reportDurationForEvent:(id)a0 eventType:(id)a1 withStartTimestamp:(double)a2;
- (void)reportEvent:(id)a0 eventType:(id)a1 duration:(double)a2 refApp:(id)a3;
- (void)reportEvent:(id)a0 reportable:(id)a1;
- (void)reportEvent:(id)a0 target:(id)a1 keyPath:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1;
- (void)reportEvent:(id)a0 type:(id)a1 adamID:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 bundleID:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 count:(long long)a2;
- (void)reportEvent:(id)a0 type:(id)a1 friendsPlayedThisGame:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 inboxFriendRequestCount:(long long)a2;
- (void)reportEvent:(id)a0 type:(id)a1 payload:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 scoreRank:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 startTime:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 startTime:(id)a2 refApp:(id)a3;
- (void)reportInviteeUILaunchDuration;
- (void)reportMessageInviteProcessingDuration;
- (void)reportOnboardingEventForType:(id)a0 withStartTimestamp:(double)a1 refApp:(id)a2;
- (void)reportPlayerAuthenticationFailure:(id)a0;
- (void)reportScreenTimeEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportTotalInviteReceivedDuration;

@end
