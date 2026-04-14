@class CSSRFUserSettingMonitor, CSOtherAppRecordingStateMonitor, NSString, CSScreenLockMonitor, CSPhoneCallStateMonitor, CSSiriRestrictionOnLockScreenMonitor, CSSiriClientBehaviorMonitor, CSVoiceTriggerEnabledMonitor;

@interface CSVoiceTriggerHearstEnabledPolicy : CSPolicy <CSEventMonitorDelegate>

@property (readonly, nonatomic) CSSiriRestrictionOnLockScreenMonitor *siriRestrictionOnLockScreenMonitor;
@property (readonly, nonatomic) CSScreenLockMonitor *screenLockMonitor;
@property (readonly, nonatomic) CSVoiceTriggerEnabledMonitor *voiceTriggerEnabledMonitor;
@property (readonly, nonatomic) CSPhoneCallStateMonitor *phonecallStateMonitor;
@property (readonly, nonatomic) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor;
@property (readonly, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor;
@property (readonly, nonatomic) CSSRFUserSettingMonitor *srfUserSettingMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)CSEventMonitorDidReceiveEvent:(id)a0;
- (void)_addVoiceTriggerEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)initWithSiriRestrictionOnLockScreenMonitor:(id)a0 screenLockMonitor:(id)a1 voiceTriggerEnabledMonitor:(id)a2 CSPhoneCallStateMonitor:(id)a3 otherAppRecordingStateMonitor:(id)a4 siriClientBehaviorMonitor:(id)a5 srfUserSettingsMonitor:(id)a6;

@end
