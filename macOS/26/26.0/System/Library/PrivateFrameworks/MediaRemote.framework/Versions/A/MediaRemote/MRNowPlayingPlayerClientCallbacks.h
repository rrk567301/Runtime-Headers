@class NSArray, MRPlayerPath, MSVMultiCallback, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClientCallbacks : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    id /* block */ _playbackSessionCallback;
    id /* block */ _playbackSessionMigrateBeginCallback;
    id /* block */ _playbackSessionMigrateEndCallback;
    id /* block */ _playbackSessionMigrateFinalizeCallback;
    id /* block */ _playbackSessionMigratePostCallback;
    id /* block */ _playbackSessionMigrateRequestCallback;
    id /* block */ _beginLyricsEventCallback;
    id /* block */ _endLyricsEventCallback;
    id /* block */ _videoThumbnailsCallback;
    id /* block */ _audioAmplitudeSamplesCallback;
    NSMutableDictionary *_commandHandlerBlocks;
    MSVMultiCallback *_createItemToken;
    MSVMultiCallback *_createItemForIdentifierToken;
    MSVMultiCallback *_metadataToken;
    MSVMultiCallback *_languageToken;
    MSVMultiCallback *_artworkToken;
    MSVMultiCallback *_animatedArtworkToken;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) BOOL hasPlaybackQueueCallbacks;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) MSVMultiCallback *createPlaybackQueueForRequestCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *createItemForOffsetCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *createItemForIdentifierCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *createChildItemCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *metadataCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *languageOptionsCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *infoCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *transcriptAlignmentsCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *lyricsCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *artworkCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *formattedArtworkCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *availableArtworkFormatsCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *animatedArtworkCallbacks;
@property (copy, nonatomic) id /* block */ playbackSessionCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateEndCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateFinalizeCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigratePostCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateRequestCallback;
@property (copy, nonatomic) id /* block */ beginLyricsEventCallback;
@property (copy, nonatomic) id /* block */ endLyricsEventCallback;
@property (copy, nonatomic) id /* block */ videoThumbnailsCallback;
@property (copy, nonatomic) id /* block */ audioAmplitudeSamplesCallback;
@property (readonly, copy, nonatomic) NSArray *commandHandlerBlocks;

- (unsigned long long)_onQueue_capabilities;
- (BOOL)removePlaybackQueueDataSourceCallback:(id)a0;
- (void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;
- (void)registerNowPlayingInfoAnimatedArtworkCallback:(id)a0;
- (void)registerNowPlayingInfoCallbacks:(id)a0;
- (void)registerNowPlayingInfoArtworkAssetCallback:(id)a0;
- (void)registerNowPlayingInfoAssetCallbacks:(id)a0;
- (void)addCommandHandlerBlock:(id /* block */)a0 forKey:(id)a1;
- (void)removeCommandHandlerBlockForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlayerPath:(id)a0 queue:(id)a1;

@end
