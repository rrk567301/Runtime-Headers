@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CSAudioStartStreamOption : NSObject <NSCopying>

@property (nonatomic) char requestHistoricalAudioDataWithHostTime;
@property (nonatomic) char requestHistoricalAudioDataSampleCount;
@property (nonatomic) unsigned long long startRecordingHostTime;
@property (nonatomic) unsigned long long startRecordingSampleCount;
@property (nonatomic) char useOpportunisticZLL;
@property (nonatomic) long long startAlertBehavior;
@property (nonatomic) long long stopAlertBehavior;
@property (nonatomic) long long errorAlertBehavior;
@property (nonatomic) char skipAlertBehavior;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (nonatomic) char requireSingleChannelLookup;
@property (nonatomic) unsigned int selectedChannel;
@property (nonatomic) unsigned long long estimatedStartHostTime;
@property (nonatomic) char disableEndpointer;
@property (nonatomic) char disableLocalSpeechRecognizer;
@property (nonatomic) char disablePrewarmLocalAsrAtStartRecording;
@property (nonatomic) char disableBoostForDoAP;
@property (nonatomic) char requestTelephonyDownlinkAudioTap;
@property (retain, nonatomic) NSString *requestMHUUID;
@property (retain, nonatomic) NSString *siriSessionUUID;
@property (nonatomic) char allowRecordWhileBeep;
@property (nonatomic) char disableRCSelection;
@property (nonatomic) char potentiallyNeedsCarPlayLatencyCorrection;
@property (nonatomic) char enforceAutomaticEndpointing;

+ (id)noAlertOption;
+ (long long)avvcAlertOverrideType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (char)isAlertBehaviorOverridedBeep;
- (void)setAVVCAlertBehavior:(id)a0;
- (long long)_alertBehaviorTypeFromAVVCOverrideType:(long long)a0;
- (void)adjustStartRecordingHostTime:(unsigned long long)a0;
- (id)avvcAlertBehavior;
- (id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)a0;
- (id)initTandemWithOption:(id)a0;

@end
