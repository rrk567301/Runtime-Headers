@class NSArray, NSString;

@interface CSVoiceTriggerHearstAPEnabledPolicy : CSPolicy <CSAudioStreamActivityMonitorDelegate>

@property (nonatomic) BOOL hasNonVoiceTriggerStreamsActive;
@property (retain, nonatomic) NSArray *nonVoiceTriggerStreamAudioProviderUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_subscribeEventMonitors;
- (void)CSAudioStreamActivityMonitorDelegate:(id)a0 hasNonVoiceTriggerStreamsActive:(BOOL)a1 audioProviderUUID:(id)a2;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (id)_fetchAudioProviderUUID;
- (BOOL)_isOtherStreamsActiveOnDoAPRoute;
- (id)isEnabledAndFetchAudioProviderUUID;
- (void)setVoiceTriggerHearstAPEnabledPolicyCallback:(id /* block */)a0;

@end
