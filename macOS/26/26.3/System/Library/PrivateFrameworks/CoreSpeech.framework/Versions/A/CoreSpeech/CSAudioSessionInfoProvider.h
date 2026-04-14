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

- (void)_stopMonitoring;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonCrash:(id)a0;
- (id)init;
- (unsigned int)audioSessionIdForDeviceId:(id)a0;
- (void)_startMonitoring;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)a0;
- (void)CSSystemDaemonStateMonitorDidReceiveSysDaemonRestartFromCrash:(id)a0;

@end
