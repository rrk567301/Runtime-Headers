@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAPModeSuspendPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate, CSIntuitiveConvAudioCaptureMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_recordStateQueue;
}

@property (nonatomic) char isAssistantClientConsideredAsRecord;
@property (retain, nonatomic) NSString *pendingRecordingStopUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)_isJarvisRouted;
- (char)_isSpeechDetectionDevicePresent;
- (void)_addConditionsForIOSAOP;
- (void)_addConditionsForIOSBargeIn;
- (void)_addVoiceTriggerAPModeSuspendConditions;
- (void)_handleClientRecordStateDidChange:(char)a0 eventUUID:(id)a1;
- (char)_isAudioRouteIneligibleForAP;
- (char)_isHearstRoutedAndWithNoPhoneCall;
- (char)_isInPhoneCallStateWithHSPhoneCallCapableRoute;
- (void)_subscribeEventMonitors;
- (void)intuitiveConvAudioCaptureMonitor:(id)a0 didStartAudioCaptureSuccessfully:(char)a1 option:(id)a2 eventUUID:(id)a3;
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)a0 stopStreamOption:(id)a1 eventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didChangedRecordState:(char)a1 withEventUUID:(id)a2 withContext:(id)a3;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(char)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;

@end
