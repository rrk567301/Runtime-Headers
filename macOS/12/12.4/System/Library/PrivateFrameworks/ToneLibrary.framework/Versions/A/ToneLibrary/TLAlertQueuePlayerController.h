@class NSString, AVAsset, AVQueuePlayer, TLAudioQueue, TLAlertQueuePlayerStateDescriptor;

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController> {
    TLAudioQueue *_audioQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    TLAlertQueuePlayerStateDescriptor *_stateDescriptor;
    NSString *_playingToneIdentifier;
    AVAsset *_toneAssetForPendingPlayingAlert;
    BOOL _hasToneAssetForPendingPlayingAlert;
    BOOL _isStoppingPlayingAlert;
    BOOL _isWaitingToCompleteReloadPlaybackRequest;
    BOOL _isObservingQueuePlayer;
    AVQueuePlayer *_queuePlayer;
    BOOL _isAudioEnvironmentSetup;
    struct { BOOL isIncomingCallActive; BOOL usesReceiverRoute; } _externalEnvironmentValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_propertyKeysOfInterestForToneAssets;
+ (double)_audioVolumeRampingDurationForAlert:(id)a0 externalEnvironmentValues:(struct { BOOL x0; BOOL x1; })a1 toneAssetDuration:(double)a2;
+ (double)_audioPlaybackInitiationDelayForAlert:(id)a0 externalEnvironmentValues:(struct { BOOL x0; BOOL x1; })a1;
+ (struct { BOOL x0; BOOL x1; })_externalEnvironmentValuesForAlert:(id)a0;
+ (long long)_audioVolumeApplicationPolicyForAlert:(id)a0 externalEnvironmentValues:(struct { BOOL x0; BOOL x1; })a1;
+ (BOOL)_shouldApplyStandardDelayAndAudioVolumeRampForAlert:(id)a0 externalEnvironmentValues:(struct { BOOL x0; BOOL x1; })a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)playAlert:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateAudioVolumeDynamicallyForAlert:(id)a0 toValue:(float)a1;
- (void)handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(BOOL)a1;
- (BOOL)stopPlayingAlerts:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)_destroyQueuePlayerForStateDescriptor:(id)a0;
- (void)_playAlertForStateDescriptor:(id)a0 previousStateDescriptor:(id)a1;
- (void)_stopPlayingAlertForStateDescriptor:(id)a0 withOptions:(id)a1 playbackCompletionType:(long long)a2;
- (void)_applyAudioVolume:(float)a0 forAlert:(id)a1;
- (void)_handleActivationAssertionStatusChangeForAlert:(id)a0 updatedStatus:(BOOL)a1 previousStateDescriptor:(id)a2 updatedStateDescriptor:(id)a3;
- (void)_stopPlaybackForStateDescriptor:(id)a0;
- (void)_reloadPlaybackForStateDescriptor:(id)a0 withToneIdentifier:(id)a1;
- (void)_stopPlaybackForStateDescriptor:(id)a0 withOptions:(id)a1 playerWasAlreadyPausedExternally:(BOOL)a2;
- (void)_restoreAudioEnvironmentForStateDescriptor:(id)a0;
- (void)_prepareAudioEnvironmentForStateDescriptor:(id)a0;
- (void)_createQueuePlayerIfNecessaryForStateDescriptor:(id)a0;
- (void)_startPlaybackForStateDescriptor:(id)a0 usingAssetWithLoadedProperties:(id)a1 shouldConfirmAlertStillPlaying:(BOOL)a2;
- (id)_fallbackToneIdentifierForStateDescriptor:(id)a0;
- (BOOL)_canPlayToneAsset:(id)a0;
- (void)_startPlaybackForStateDescriptor:(id)a0 usingConfirmedPlayableAsset:(id)a1;
- (void)_stopObservingQueuePlayer;
- (void)_willBeginPlayingAlertForStateDescriptor:(id)a0;
- (void)_startPlaybackForStateDescriptor:(id)a0 usingConfirmedPlayableAsset:(id)a1 hasAlreadyDetectedUserAttention:(BOOL)a2;
- (void)_startObservingQueuePlayer;
- (void)_performDelayedAudioPlaybackInitiationForStateDescriptor:(id)a0 audioVolumeRampingDuration:(double)a1;
- (void)_initiateAudioPlaybackForStateDescriptor:(id)a0 audioVolumeRampingDuration:(double)a1;
- (void)_didEndPlayingAlertForStateDescriptor:(id)a0;
- (float)_audioVolumeForAlert:(id)a0;
- (void)_queuePlayer:(id)a0 currentItemWasUpdatedFromValue:(id)a1;
- (void)_queuePlayer:(id)a0 currentItemStatusWasUpdatedToValue:(long long)a1;
- (void)_resetClientPriorityForStateDescriptor:(id)a0;

@end
