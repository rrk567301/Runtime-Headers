@interface MobileTimerSupport.MTReporterProxy : NSObject <MTReporter, MTEventReporting> {
    void /* unknown type, empty encoding */ actor;
}

- (void)didTriggerSoundPlaybackWithId:(id)a0;
- (void)didDuckPlaybackForAttentionAwarenessWithId:(id)a0;
- (id)init;
- (void)didStopSoundPlaybackWithId:(id)a0;
- (void).cxx_destruct;
- (void)didRenderSceneForAlarm:(id)a0 withType:(id)a1;
- (void)didUpdateAudioReporterId:(unsigned long long)a0;
- (void)didShowCoversheetForIdentifier:(id)a0;
- (void)didPostToneAlertWithIdentifier:(id)a0;
- (void)didTearDownToneAlertWithIdentifier:(id)a0;
- (void)didCreateLiveActivityForAlarm:(id)a0 withId:(id)a1 date:(id)a2;
- (void)didPostNotificationForAlarm:(id)a0 fullNotificationId:(id)a1 shortNotificationId:(id)a2;
- (void)didRetrieveDeliveredNotificationForAlarm:(id)a0 date:(id)a1;
- (void)processDismissedAlarm:(id)a0;
- (void)processFiredAlarm:(id)a0;

@end
