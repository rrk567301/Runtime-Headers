@class NSString, _TtC18MobileTimerSupport15MTReporterProxy;

@interface MTReportsManager : NSObject <MTReporter>

@property (retain, nonatomic) _TtC18MobileTimerSupport15MTReporterProxy *reporterProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateAudioReporterId:(unsigned long long)a0;
- (void)didRenderSceneForAlarm:(id)a0 withType:(id)a1;
- (void)didTriggerSoundPlaybackWithId:(id)a0;
- (void)didDuckPlaybackForAttentionAwarenessWithId:(id)a0;
- (void)didStopSoundPlaybackWithId:(id)a0;
- (void)didShowCoversheetForIdentifier:(id)a0;
- (id)init;
- (void)didPostToneAlertWithIdentifier:(id)a0;
- (void)didTearDownToneAlertWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)didCreateLiveActivityForAlarm:(id)a0 withId:(id)a1 date:(id)a2;
- (void)didPostNotificationForAlarm:(id)a0 fullNotificationId:(id)a1 shortNotificationId:(id)a2;
- (void)didRetrieveDeliveredNotificationForAlarm:(id)a0 date:(id)a1;
- (void)processFiredAlarm:(id)a0;

@end
