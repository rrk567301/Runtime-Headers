@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSBluetoothSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) char isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_stopMonitoring;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)_didReceiveBluetoothSpeakerStateChangeNotification:(char)a0;
- (void)_fetchSpeakerStateActiveInfo;
- (void)_startMonitoringWithQueue:(id)a0;

@end
