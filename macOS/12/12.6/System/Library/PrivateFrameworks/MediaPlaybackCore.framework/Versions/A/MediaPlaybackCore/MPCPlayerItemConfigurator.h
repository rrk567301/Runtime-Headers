@class NSString, MPAVRoutingController, MPCPlaybackEngine, MPCPlayerAudioRoute, MPCModelGenericAVItem, MPCMediaFoundationTranslator, NSObject;
@protocol MFPlaybackStackController, OS_dispatch_source, MFQueueManagement;

@interface MPCPlayerItemConfigurator : NSObject <MPAVRoutingControllerDelegate>

@property (nonatomic) long long defaultEQPresetType;
@property (readonly, weak, nonatomic) MPCMediaFoundationTranslator *translator;
@property (readonly, weak, nonatomic) id<MFPlaybackStackController, MFQueueManagement> stackController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *userDefaultsDebouncer;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly, nonatomic) MPCPlayerAudioRoute *currentAudioRoute;
@property (readonly, weak, nonatomic) MPCModelGenericAVItem *currenItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)currentItem;
- (id)queuedItems;
- (void)routingController:(id)a0 pickedRoutesDidChange:(id)a1;
- (void)_setupNotifications;
- (id)initWithPlaybackEngine:(id)a0 stackController:(id)a1 translator:(id)a2;
- (void)updatePlayerConfiguration;
- (BOOL)configureQueuePlayerItem:(id)a0 error:(id *)a1;
- (void)_setupRoutingController;
- (void)_setupPlayer;
- (BOOL)_setupQueueItemForEnhancedAudioHLSPlayback:(id)a0 metadataWaitTime:(double *)a1 error:(id *)a2;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)a0;
- (void)_preferredResolutionDidChange:(id)a0;
- (void)setupDefaultsDebouncer;
- (void)tearDownDefaultsDebouncer;
- (void)processAudioQualityChanges;
- (BOOL)_shouldReloadEntireQueue;
- (void)_updateQueueItemsAndPlayerForFormatChangeIfRequired;
- (id)_audioFormatsDictionaryWithHLSMetadataFromAsset:(id)a0 metadataWaitTime:(double *)a1 error:(id *)a2;
- (void)_emitAudioFormatSelection:(id)a0 item:(id)a1;
- (id)_HLSMetadataForAsset:(id)a0 error:(id *)a1;
- (id)_audioFormatsDictionaryWithHLSMetadata:(id)a0;
- (void)updateCurrentAudioRouteWithPickedRoutes:(id)a0;
- (id)_modeObjectForPlayerItem:(id)a0;
- (void)_updatePreferredAudioFormatIfRequiredForItem:(id)a0 route:(id)a1;

@end
