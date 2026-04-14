@class AMSMetrics, NSTimer, NSDate, NSNumber;

@interface GKReporter : NSObject

@property (retain, nonatomic) AMSMetrics *metrics;
@property (retain) NSNumber *metricsThrottlePercentage;
@property (nonatomic) double randomMetricsCollection;
@property (retain, nonatomic) NSDate *lastBagCheck;
@property (retain, nonatomic) NSTimer *flushTimer;
@property (nonatomic) double authenticateResponseTimestamp;
@property (nonatomic) double inviteeUILaunchTimestamp;
@property (nonatomic) double connectingDevicesTimestamp;
@property (nonatomic) double programaticInviteTimestamp;
@property (nonatomic) double appLaunchTimestamp;
@property (nonatomic) double totalInviteReceivedTimestamp;
@property (nonatomic) double messageInviteProcessingTimestamp;
@property (nonatomic) double currentRealtimeMatchPersistenceTimestamp;

+ (id)reporter;
+ (id)gameCenterBag;
+ (id)appendAMSPropertiesForEventType:(id)a0;
+ (BOOL)shouldCollectAMSMetricForDomain:(id)a0 event:(id)a1;

- (void).cxx_destruct;
- (void)reportEvent:(id)a0 payload:(id)a1;
- (void)reportTournamentAnalyticsWithDomain:(id)a0 type:(id)a1 tournamentType:(id)a2 replayCount:(id)a3 friendCount:(id)a4 tournamentID:(id)a5 bundleID:(id)a6 inviteeCount:(id)a7;
- (void)recordAuthenticateResponseTimestamp;
- (void)reportEvent:(id)a0 type:(id)a1 startTime:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1;
- (void)reportEvent:(id)a0 type:(id)a1 bundleID:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 count:(long long)a2;
- (void)recordConnectingDevicesTimestamp;
- (void)reportCurrentRealtimeMatchPersistenceDuration;
- (void)reportConnectingDevicesDuration;
- (void)reportProgramaticInviteDuration;
- (void)reportAuthenticateResponseDuration;
- (void)recordProgramaticInviteTimestamp;
- (void)reportEvent:(id)a0 reportable:(id)a1;
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;
- (void)_getThrottlePercentage:(id)a0;
- (void)reportAMSMetricEvent:(id)a0;
- (BOOL)isTimeSpanValid:(double)a0 maxDuration:(double)a1;
- (void)reportEvent:(id)a0 target:(id)a1 keyPath:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 payload:(id)a2;
- (void)reportDurationForEvent:(id)a0 eventType:(id)a1 withStartTimestamp:(double)a2;
- (void)spinupAMSMetricsFlusher;
- (void)reportAMSMetricDomain:(id)a0 properties:(id)a1;
- (void)reportAMSMetricsForTask:(id)a0 session:(id)a1 error:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 adamID:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 friendsPlayedThisGame:(id)a2;
- (void)reportEvent:(id)a0 type:(id)a1 inboxFriendRequestCount:(long long)a2;
- (void)reportEvent:(id)a0 type:(id)a1 scoreRank:(id)a2;
- (void)recordInviteeUILaunchTimestamp;
- (void)reportInviteeUILaunchDuration;
- (void)recordMessageInviteProcessingTimestamp;
- (void)reportMessageInviteProcessingDuration;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)reportAppLaunchDuration;
- (void)reportTotalInviteReceivedDuration;
- (void)reportScreenTimeEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportOnboardingEventForType:(id)a0 withStartTimestamp:(double)a1;
- (void)reportPlayerAuthenticationFailure:(id)a0;

@end
