@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject <CSSystemDaemonStateMonitorDelegate, CSAudioSessionInfoProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonRestartFromCrash:(id)a0;
- (unsigned int)audioSessionIdForDeviceId:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)dealloc;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonCrash:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)_startMonitoring;
- (void).cxx_destruct;
- (void)_stopMonitoring;

@end
