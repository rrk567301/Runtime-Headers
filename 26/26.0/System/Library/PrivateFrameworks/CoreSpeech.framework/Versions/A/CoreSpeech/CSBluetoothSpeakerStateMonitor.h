@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSBluetoothSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)start;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_didReceiveBluetoothSpeakerStateChangeNotification:(BOOL)a0;
- (void)_fetchSpeakerStateActiveInfo;

@end
