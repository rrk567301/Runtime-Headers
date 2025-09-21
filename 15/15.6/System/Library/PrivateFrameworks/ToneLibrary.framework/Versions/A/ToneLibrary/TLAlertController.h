@class NSString, NSMapTable, TLAlertQueuePlayerController, NSObject, TLAlertSystemSoundController;
@protocol OS_dispatch_queue;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    TLAlertQueuePlayerController *_queuePlayerController;
    TLAlertSystemSoundController *_systemSoundController;
    NSMapTable *_alertContexts;
}

@property (class, readonly) TLAlertController *sharedAlertController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_playbackBackEndForAlert:(id)a0;
+ (long long)_playbackBackEndForAlertType:(long long)a0 topic:(id)a1;
+ (char)_shouldStopAlertForUserInterruption:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)_controllerForPlaybackBackEnd:(long long)a0;
- (void)_didCompletePlaybackOfAlert:(id)a0;
- (void)_didReachTimeoutForAlert:(id)a0;
- (void)_handleUserInterruptionNotification:(id)a0;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (id)_prepareForPlayingAlert:(id)a0;
- (id)_queuePlayerController;
- (char)_stopAllAlertsInCurrentProcessWithUserInterruptionDate:(id)a0;
- (char)_stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (id)_systemSoundController;
- (void)handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(char)a1;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;
- (char)stopAllAlerts;
- (char)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)updateAudioVolumeDynamicallyForAlert:(id)a0 toValue:(float)a1;

@end
