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
+ (BOOL)_shouldStopAlertForUserInterruption:(id)a0;
+ (long long)_playbackBackEndForAlertType:(long long)a0 topic:(id)a1;

- (id)_queuePlayerController;
- (void)preheatForAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performBlockOnAccessQueue:(id /* block */)a0;
- (void)_didCompletePlaybackOfAlert:(id)a0;
- (BOOL)_stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)_didReachTimeoutForAlert:(id)a0;
- (BOOL)_stopAllAlertsInCurrentProcessWithUserInterruptionDate:(id)a0;
- (void)handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(BOOL)a1;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleUserInterruptionNotification:(id)a0;
- (void)dealloc;
- (id)_controllerForPlaybackBackEnd:(long long)a0;
- (void)_assertRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)updateAudioVolumeDynamicallyForAlert:(id)a0 toValue:(float)a1;
- (id)_systemSoundController;
- (id)_prepareForPlayingAlert:(id)a0;
- (BOOL)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (id)init;
- (BOOL)stopAllAlerts;

@end
