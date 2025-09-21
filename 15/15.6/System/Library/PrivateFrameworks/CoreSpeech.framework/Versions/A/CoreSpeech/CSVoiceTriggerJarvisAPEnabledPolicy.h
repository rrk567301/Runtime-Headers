@class NSString;

@interface CSVoiceTriggerJarvisAPEnabledPolicy : CSPolicy <CSSiriClientBehaviorMonitorDelegate>

@property (nonatomic) char isPlaybackAudioSessionActive;
@property (retain, nonatomic) NSString *clientRecordRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (void)_subscribeEventMonitors;
- (void)siriClientBehaviorMonitor:(id)a0 activatedAudioSessionWithReason:(unsigned long long)a1;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(char)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)siriClientBehaviorMonitorAudioDeviceInfoUpdated:(id)a0;
- (void)siriClientBehaviorMonitorReleasedAudioSession:(id)a0;

@end
