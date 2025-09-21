@class NSString, NSArray, NSDate, NSNumber;

@interface MXCoreSessionBase : NSObject

@property (retain) NSString *audioCategory;
@property (retain) NSString *audioMode;
@property (retain) NSString *clientName;
@property (retain) NSNumber *clientPID;
@property (retain) NSString *displayID;
@property (retain) NSNumber *ID;
@property (retain) NSArray *originalReporterIDs;
@property (retain) NSArray *reporterIDs;
@property (retain) NSString *routingContextUUID;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) int coreSessionType;
@property (nonatomic) char enableBluetoothRecordingPreference;
@property (nonatomic) float interruptionFadeDuration;
@property (nonatomic) unsigned int interruptionStyle;
@property (nonatomic) char interruptionStyleSetByClient;
@property (nonatomic) char isNowPlayingApp;
@property (nonatomic) char isTheAssistant;
@property (nonatomic) char reporterStarted;
@property (retain) NSDate *timestampWhenMostRecentlyActivated;
@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) char hasInput;
@property (nonatomic) char hasPhoneCallBehavior;
@property (nonatomic) char isActive;
@property (nonatomic) char isEligibleForBTSmartRoutingConsideration;
@property (nonatomic) char isEligibleForBTSmartRoutingConsiderationSetByClient;
@property (nonatomic) char isPlaying;
@property (nonatomic) char isRecording;
@property (nonatomic) char mixesWithEveryone;
@property (nonatomic) unsigned long long mxSessionIDCounter;
@property (nonatomic) char prefersNoInterruptions;

- (void)dealloc;
- (id)init;
- (id)info;
- (char)hasAudioCategory:(id)a0;
- (char)hasAudioMode:(id)a0;
- (char)isSidekick;
- (void)updateClientName:(id)a0;
- (void)updateDefaultInterruptionFadeDuration:(id)a0;
- (char)wasRecentlyActivated;

@end
