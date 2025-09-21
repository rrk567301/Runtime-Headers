@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long builtInSpeakerState;
@property (nonatomic) char isSpeakerMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)_fetchSpeakerStateActiveInfo;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)currentBuiltinSpeakerState;
- (char)isBuiltinSpeakerMuted;
- (void)_notifyObserver:(id)a0 isSpeakerMuted:(char)a1;
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)a0;
- (void)_didReceiveSpeakerMuteStateChangeNotification:(char)a0;
- (void)_fetchSpeakerStateMutedInfo;
- (char)_getIsSpeakerMutedDefaultVal;
- (void)_notifyObserver:(id)a0 withBuiltinSpeakerState:(unsigned long long)a1;

@end
