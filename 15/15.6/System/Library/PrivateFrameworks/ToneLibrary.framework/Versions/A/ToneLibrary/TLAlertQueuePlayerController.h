@class NSString, AVAsset, AVQueuePlayer, TLAudioQueue, TLAlertQueuePlayerStateDescriptor;

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController> {
    TLAudioQueue *_audioQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    TLAlertQueuePlayerStateDescriptor *_stateDescriptor;
    NSString *_playingToneIdentifier;
    AVAsset *_toneAssetForPendingPlayingAlert;
    char _hasToneAssetForPendingPlayingAlert;
    char _isStoppingPlayingAlert;
    char _isWaitingToCompleteReloadPlaybackRequest;
    char _isObservingQueuePlayer;
    AVQueuePlayer *_queuePlayer;
    char _isAudioEnvironmentSetup;
    struct { char isIncomingCallActive; char usesReceiverRoute; } _externalEnvironmentValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_audioPlaybackInitiationDelayForAlert:(id)a0 externalEnvironmentValues:(struct { char x0; char x1; })a1;
+ (long long)_audioVolumeApplicationPolicyForAlert:(id)a0 externalEnvironmentValues:(struct { char x0; char x1; })a1;
+ (double)_audioVolumeRampingDurationForAlert:(id)a0 externalEnvironmentValues:(struct { char x0; char x1; })a1 toneAssetDuration:(double)a2;
+ (struct { char x0; char x1; })_externalEnvironmentValuesForAlert:(id)a0;
+ (id)_propertyKeysOfInterestForToneAssets;
+ (char)_shouldApplyStandardDelayAndAudioVolumeRampForAlert:(id)a0 externalEnvironmentValues:(struct { char x0; char x1; })a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_applyAudioVolume:(float)a0 forAlert:(id)a1;
- (float)_audioVolumeForAlert:(id)a0;
- (char)_canPlayToneAsset:(id)a0;
- (void)_createQueuePlayerIfNecessaryForStateDescriptor:(id)a0;
- (void)_destroyQueuePlayerForStateDescriptor:(id)a0;
- (void)_didEndPlayingAlertForStateDescriptor:(id)a0;
- (id)_fallbackToneIdentifierForStateDescriptor:(id)a0;
- (void)_handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(char)a1 previousStateDescriptor:(id)a2 updatedStateDescriptor:(id)a3;
- (void)_initiateAudioPlaybackForStateDescriptor:(id)a0 audioVolumeRampingDuration:(double)a1;
- (void)_performDelayedAudioPlaybackInitiationForStateDescriptor:(id)a0 audioVolumeRampingDuration:(double)a1;
- (void)_playAlertForStateDescriptor:(id)a0 previousStateDescriptor:(id)a1;
- (void)_prepareAudioEnvironmentForStateDescriptor:(id)a0;
- (void)_queuePlayer:(id)a0 currentItemStatusWasUpdatedToValue:(long long)a1;
- (void)_queuePlayer:(id)a0 currentItemWasUpdatedFromValue:(id)a1;
- (void)_reloadPlaybackForStateDescriptor:(id)a0 withToneIdentifier:(id)a1;
- (void)_resetClientPriorityForStateDescriptor:(id)a0;
- (void)_restoreAudioEnvironmentForStateDescriptor:(id)a0;
- (void)_startObservingQueuePlayer;
- (void)_startPlaybackForStateDescriptor:(id)a0 usingAssetWithLoadedProperties:(id)a1 shouldConfirmAlertStillPlaying:(char)a2;
- (void)_startPlaybackForStateDescriptor:(id)a0 usingConfirmedPlayableAsset:(id)a1;
- (void)_startPlaybackForStateDescriptor:(id)a0 usingConfirmedPlayableAsset:(id)a1 hasAlreadyDetectedUserAttention:(char)a2;
- (void)_stopObservingQueuePlayer;
- (void)_stopPlaybackForStateDescriptor:(id)a0;
- (void)_stopPlaybackForStateDescriptor:(id)a0 withOptions:(id)a1 playerWasAlreadyPausedExternally:(char)a2;
- (void)_stopPlayingAlertForStateDescriptor:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)_willBeginPlayingAlertForStateDescriptor:(id)a0;
- (void)handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(char)a1;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (char)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)updateAudioVolumeDynamicallyForAlert:(id)a0 toValue:(float)a1;

@end
