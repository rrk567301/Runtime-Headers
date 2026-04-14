@class MTAlarmStorage, _TtC11MobileTimer13MTCDDataStore, MTCoreDuetMonitor, NSDate, MTTimerSnapshot, MTTimerServer, MTAlarmServer, MTSystemStateListener, NSString, MTTimerStorage, MTAlarmIntentDonor, MTTimeListener, MTLanguageChangeListener, MTAlarmSnapshot, MTStopwatchServer, MTTimerScheduler, MTAgentNotificationManager, MTAlarmScheduler, MTAgentDiagnosticListener;
@protocol NAScheduler, MTNotificationCenter;

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate>

@property (retain, nonatomic) NSDate *launchDate;
@property (nonatomic) BOOL isHorseman;
@property (nonatomic) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTAgentNotificationManager *notificationManager;
@property (retain, nonatomic) MTSystemStateListener *systemStateListener;
@property (retain, nonatomic) MTLanguageChangeListener *languageChangeListener;
@property (retain, nonatomic) MTAgentDiagnosticListener *diagnostics;
@property (retain, nonatomic) MTTimeListener *timeListener;
@property (retain, nonatomic) MTAlarmServer *alarmServer;
@property (retain, nonatomic) MTAlarmScheduler *alarmScheduler;
@property (retain, nonatomic) MTAlarmSnapshot *alarmSnapshot;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTTimerServer *timerServer;
@property (retain, nonatomic) MTTimerScheduler *timerScheduler;
@property (retain, nonatomic) MTTimerSnapshot *timerSnapshot;
@property (retain, nonatomic) MTTimerStorage *timerStorage;
@property (retain, nonatomic) _TtC11MobileTimer13MTCDDataStore *coreDataStore;
@property (retain, nonatomic) MTStopwatchServer *stopwatchServer;
@property (retain, nonatomic) id<MTNotificationCenter> notificationCenter;
@property (retain, nonatomic) MTAlarmIntentDonor *alarmIntentDonor;
@property (retain, nonatomic) MTCoreDuetMonitor *coreDuetMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)agent;

- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)_setupInitialListeners;
- (void)_setupTimers;
- (void)_setupStopwatches;
- (void)_setupNotificationCenter;
- (id)_diagnosticProviders;
- (void)initCommon;
- (void)_setupAlarms;
- (void).cxx_destruct;
- (void)_setupSecondaryListeners;
- (void)restoreDidFinish;
- (void)handleF5Reset;
- (id)init;
- (void)_setupSessions;
- (void)handleMigrationFinish;

@end
