@class MPPlaybackEQSetting, MPCMediaFoundationTranslator, NSString, MPCModelGenericAVItem, MPCAudioAssetTypeSelector, NSObject, MPCPlayerAudioRoute, MPCPlaybackEngine, MPAVRoutingController;
@protocol MFPlaybackStackController, OS_dispatch_source, MFQueueManagement;

@interface MPCPlayerItemConfigurator : NSObject <MPAVRoutingControllerDelegate, MPCPlaybackEngineEventObserving>

@property (retain, nonatomic) MPPlaybackEQSetting *eqSetting;
@property (readonly, weak, nonatomic) MPCMediaFoundationTranslator *translator;
@property (readonly, weak, nonatomic) id<MFPlaybackStackController, MFQueueManagement> stackController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute;
@property (readonly, weak, nonatomic) MPCModelGenericAVItem *currentItem;
@property (readonly, nonatomic) MPCAudioAssetTypeSelector *audioAssetTypeSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)queuedItems;
- (void)routingController:(id)a0 pickedRoutesDidChange:(id)a1;
- (void)_setupNotifications;
- (void)engineDidChangeVocalAttenuationState:(id)a0;
- (void)engineDidChangeVocalAttenuationLevel:(id)a0;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)a0;
- (void)_preferredResolutionDidChange:(id)a0;
- (id)initWithPlaybackEngine:(id)a0 stackController:(id)a1 translator:(id)a2;
- (BOOL)configureQueuePlayerItem:(id)a0 error:(id *)a1;
- (void)updatePlayerConfiguration;
- (void)_setupRoutingController;
- (void)setupDefaultsDebouncer;
- (void)tearDownDefaultsDebouncer;
- (void)processAudioQualityChanges;
- (void)_setupPlayer;
- (BOOL)_setupQueueItemForEnhancedAudioHLSPlayback:(id)a0 metadataWaitTime:(double *)a1 error:(id *)a2;
- (void)_setupQueueItemForLossyAudioPlayback:(id)a0;
- (void)_emitAudioFormatSelection:(id)a0 item:(id)a1;
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)a0 metadataWaitTime:(double *)a1 error:(id *)a2;
- (id)_HLSMetadataForAsset:(id)a0 error:(id *)a1;
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)a0;
- (void)updateCurrentAudioRouteWithPickedRoutes:(id)a0;
- (id)_modeObjectForPlayerItem:(id)a0;
- (BOOL)_shouldReloadEntireQueue;
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)a0 route:(id)a1;
- (void)_resetBufferedAudio;

@end
