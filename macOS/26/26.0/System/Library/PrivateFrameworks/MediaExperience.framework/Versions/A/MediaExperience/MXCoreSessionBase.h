@class NSString, NSArray, NSDictionary, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_source;

@interface MXCoreSessionBase : NSObject

@property (retain) NSString *audioCategory;
@property (retain) NSString *audioMode;
@property (retain) NSString *clientName;
@property (retain) NSNumber *clientPID;
@property (retain) NSString *defaultBuiltInRoutePreference;
@property (retain) NSString *displayID;
@property (retain) NSNumber *ID;
@property (retain) NSArray *originalReporterIDs;
@property (retain) NSArray *reporterIDs;
@property (retain) NSString *routingContextUUID;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) int coreSessionType;
@property (nonatomic) BOOL defaultBuiltInRoutePreferenceSetByClient;
@property (nonatomic) BOOL enableBluetoothRecordingPreference;
@property (nonatomic) BOOL enableBluetoothRecordingPreferenceSetByClient;
@property (nonatomic) BOOL hasEntitlementToSuppressRecordingStateToSystemStatus;
@property (nonatomic) float interruptionFadeDuration;
@property (nonatomic) unsigned int interruptionStyle;
@property (nonatomic) BOOL interruptionStyleSetByClient;
@property (nonatomic) BOOL isNowPlayingApp;
@property (nonatomic) BOOL isTheAssistant;
@property (nonatomic) BOOL prefersEchoCancelledInput;
@property (retain) NSDictionary *preferredRouteControlFeatures;
@property (nonatomic) BOOL prefersSuppressingRecordingState;
@property (nonatomic) BOOL reporterStarted;
@property (retain) NSDate *timestampWhenMostRecentlyActivated;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) BOOL hasInput;
@property (nonatomic) BOOL hasPhoneCallBehavior;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL idleSleepPreventorAllocated;
@property (nonatomic) unsigned int idleSleepPreventor;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *idleSleepPreventorUpdaterTimer;
@property (nonatomic) BOOL isEligibleForBTSmartRoutingConsideration;
@property (nonatomic) BOOL isEligibleForBTSmartRoutingConsiderationSetByClient;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isRecordingMuted;
@property (readonly, nonatomic) BOOL allowsAirPlayVideo;
@property (readonly, nonatomic) BOOL allowsAirPlayBuffered;
@property (nonatomic) BOOL hasExternalMuteNotificationContext;
@property (nonatomic) BOOL mixesWithEveryone;
@property (nonatomic) unsigned long long mxSessionIDCounter;
@property (retain) NSDictionary *mostRecentSessionInfoSetOnVA;
@property (nonatomic) BOOL prefersNoInterruptions;
@property (nonatomic) BOOL waitingToResume;
@property (nonatomic) unsigned int shadowingAudioSessionID;
@property (nonatomic) unsigned int shadowingAudioSessionOptions;

- (void)dealloc;
- (id)init;
- (id)info;
- (void)dumpDebugConfigInfo;
- (void)dumpDebugStateInfo;
- (void)extractAndSetAuditToken:(id)a0;
- (BOOL)hasAudioCategory:(id)a0;
- (BOOL)hasAudioMode:(id)a0;
- (BOOL)isSidekick;
- (void)updateClientName:(id)a0;
- (void)updateDefaultInterruptionFadeDuration:(id)a0;
- (BOOL)wasRecentlyActivated;

@end
