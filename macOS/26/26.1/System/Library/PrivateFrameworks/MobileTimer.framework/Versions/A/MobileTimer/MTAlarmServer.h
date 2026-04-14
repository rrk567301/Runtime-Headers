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

- (id)initWithStorage:(id)a0;
- (void)stopListening;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)printDiagnostics;
- (void)didUpdateAudioReporterId:(id)a0;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (void)didPostToneAlertWithIdentifier:(id)a0;
- (void)checkIn;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)didTearDownToneAlertWithIdentifier:(id)a0;
- (void)startListening;
- (void)snoozeAlarmWithIdentifier:(id)a0 snoozeAction:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (void)updateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)addAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)didStopSoundPlaybackWithId:(id)a0;
- (void)handleSystemReady;
- (void)didTriggerSoundPlaybackWithId:(id)a0;
- (void)getAlarmsWithCompletion:(id /* block */)a0;
- (BOOL)_isSystemReady;
- (void)didShowCoversheetForIdentifier:(id)a0;
- (void)dismissAlarmWithIdentifier:(id)a0 dismissAction:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)_systemNotReadyError;
- (void).cxx_destruct;
- (void)removeAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (id)gatherDiagnostics;
- (void)didDuckPlaybackForAttentionAwarenessWithId:(id)a0;
- (void)registerAnalyticsDelegate:(id)a0;
- (void)didRenderSceneForAlarm:(id)a0 withType:(id)a1;

@end
