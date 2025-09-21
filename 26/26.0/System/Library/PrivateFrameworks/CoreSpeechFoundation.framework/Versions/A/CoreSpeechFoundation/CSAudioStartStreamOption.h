@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CSAudioStartStreamOption : NSObject <NSCopying>

@property (nonatomic) BOOL requestHistoricalAudioDataWithHostTime;
@property (nonatomic) BOOL requestHistoricalAudioDataSampleCount;
@property (nonatomic) unsigned long long startRecordingHostTime;
@property (nonatomic) unsigned long long startRecordingSampleCount;
@property (nonatomic) BOOL useOpportunisticZLL;
@property (nonatomic) long long startAlertBehavior;
@property (nonatomic) long long stopAlertBehavior;
@property (nonatomic) long long errorAlertBehavior;
@property (nonatomic) BOOL skipAlertBehavior;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (nonatomic) BOOL requireSingleChannelLookup;
@property (nonatomic) unsigned int selectedChannel;
@property (nonatomic) unsigned long long estimatedStartHostTime;
@property (nonatomic) BOOL disableEndpointer;
@property (nonatomic) BOOL disableLocalSpeechRecognizer;
@property (nonatomic) BOOL disablePrewarmLocalAsrAtStartRecording;
@property (nonatomic) BOOL disableBoostForDoAP;
@property (retain, nonatomic) NSString *requestMHUUID;
@property (retain, nonatomic) NSString *siriSessionUUID;
@property (nonatomic) BOOL allowRecordWhileBeep;
@property (nonatomic) BOOL disableRCSelection;
@property (nonatomic) BOOL potentiallyNeedsCarPlayLatencyCorrection;
@property (nonatomic) BOOL enforceAutomaticEndpointing;

+ (id)noAlertOption;
+ (long long)avvcAlertOverrideType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAlertBehaviorOverridedBeep;
- (void)setAVVCAlertBehavior:(id)a0;
- (long long)_alertBehaviorTypeFromAVVCOverrideType:(long long)a0;
- (void)adjustStartRecordingHostTime:(unsigned long long)a0;
- (id)avvcAlertBehavior;
- (id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)a0;
- (id)initTandemWithOption:(id)a0;
- (id)initTandemWithTandemAttachConfig:(id)a0 primaryStreamOption:(id)a1;

@end
