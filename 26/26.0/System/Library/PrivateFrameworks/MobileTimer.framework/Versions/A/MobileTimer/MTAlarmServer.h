@class NSString, MTXPCConnectionListenerProvider, MTAlarmStorage, _TtC11MobileTimer13VoidConductor;
@protocol NAScheduler, MTEventReporting;

@interface MTAlarmServer : NSObject <MTAlarmServer, MTAlarmObserver, MTAgentDiagnosticDelegate, MTRegistersAnalytics>

@property (readonly, nonatomic) MTAlarmStorage *storage;
@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly, weak, nonatomic) id<MTEventReporting> analyticsCoordinator;
@property (retain, nonatomic) _TtC11MobileTimer13VoidConductor *conductor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_notifyClientsForTriggerType:(unsigned long long)a0;

- (void)printDiagnostics;
- (void)getAlarmsWithCompletion:(id /* block */)a0;
- (void)didUpdateAudioReporterId:(id)a0;
- (id)gatherDiagnostics;
- (void)didRenderSceneForAlarm:(id)a0 withType:(id)a1;
- (BOOL)_isSystemReady;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)checkIn;
- (void)stopListening;
- (id)_systemNotReadyError;
- (void)startListening;
- (void)registerAnalyticsDelegate:(id)a0;
- (void)didTriggerSoundPlaybackWithId:(id)a0;
- (void)didDuckPlaybackForAttentionAwarenessWithId:(id)a0;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)didStopSoundPlaybackWithId:(id)a0;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)dismissAlarmWithIdentifier:(id)a0 dismissAction:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (id)initWithStorage:(id)a0;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)handleSystemReady;
- (void)didShowCoversheetForIdentifier:(id)a0;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (void)snoozeAlarmWithIdentifier:(id)a0 snoozeAction:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)addAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)didPostToneAlertWithIdentifier:(id)a0;
- (void)updateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)didTearDownToneAlertWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
