@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long builtInSpeakerState;
@property (nonatomic) BOOL isSpeakerMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_fetchSpeakerStateActiveInfo;
- (unsigned long long)currentBuiltinSpeakerState;
- (BOOL)isBuiltinSpeakerMuted;
- (void)_notifyObserver:(id)a0 isSpeakerMuted:(BOOL)a1;
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)a0;
- (void)_didReceiveSpeakerMuteStateChangeNotification:(BOOL)a0;
- (void)_fetchSpeakerStateMutedInfo;
- (BOOL)_getIsSpeakerMutedDefaultVal;
- (void)_notifyObserver:(id)a0 withBuiltinSpeakerState:(unsigned long long)a1;

@end
