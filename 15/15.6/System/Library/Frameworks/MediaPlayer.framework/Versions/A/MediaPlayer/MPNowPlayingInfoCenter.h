@class MPNowPlayingContentItem, NSString, MRPlayerPath, NSDate, NSMutableDictionary, NSDictionary, MPNowPlayingInfoCenterArtworkContext, NSObject, NSMutableArray, MSVLRUDictionary, MPArtworkResizeUtility, MSVTimer;
@protocol MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDelegate, OS_dispatch_queue, MPNowPlayingPlaybackQueueDataSource;

@interface MPNowPlayingInfoCenter : NSObject <MPMediaRemoteEntityArtworkGenerator> {
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDictionary *_convertedNowPlayingInfo;
    NSDate *_pushDate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPNowPlayingInfoCenterArtworkContext *_publishedContext;
    NSMutableDictionary *_mutatedContentItems;
    NSMutableDictionary *_mutatedPlaybackQueueRequests;
    struct _MSVSignedRange { long long location; long long length; } _loadedContentItemsRange;
    struct _MSVSignedRange { long long location; long long length; } _requestedContentItemsRange;
    NSMutableArray *_contentItemIdentifiers;
    MSVLRUDictionary *_contentItems;
    MPNowPlayingContentItem *_nowPlayingContentItem;
    unsigned long long _playbackState;
    NSObject<OS_dispatch_queue> *_workQueue;
    MPArtworkResizeUtility *_artworkResizeUtility;
    MSVTimer *_contentItemInvalidationTimer;
    char _isHighPriorityInvalidationTimer;
    id<MPNowPlayingPlaybackQueueDataSource> _playbackQueueDataSource;
    id<MPNowPlayingInfoLyricsDelegate> _lyricsDelegate;
    struct { void *createPlaybackQueue; void *createContentItem; void *createChildItem; void *metadata; void *artwork; void *formattedArtwork; void *info; void *transcriptAlignments; void *languageOptions; void *lyrics; } _callbacks;
    void *_fallbackActivity;
    char _invalidated;
    unsigned long long _stateHandle;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;

@property (readonly, nonatomic) char supportsArtworkCatalogLoading;
@property (weak, nonatomic) id<MPNowPlayingPlaybackQueueDelegate> playbackQueueDelegate;
@property (readonly, nonatomic) NSString *playerID;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) NSString *representedApplicationBundleIdentifier;
@property (weak, nonatomic) id<MPNowPlayingPlaybackQueueDataSource> playbackQueueDataSource;
@property (retain, nonatomic) MPNowPlayingContentItem *nowPlayingContentItem;
@property (weak, nonatomic) id<MPNowPlayingInfoLyricsDelegate> lyricsDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceQueue;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (nonatomic) unsigned long long playbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCenter;
+ (id)infoCenterForPlayerID:(id)a0;
+ (id)infoCenterForPlayerPath:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (char)isInvalidated;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)a0;
- (void)becomeActive;
- (id)initWithPlayerPath:(id)a0;
- (void)invalidatePlaybackQueue;
- (void *)_createPlaybackQueueForRequest:(void *)a0;
- (void)_onQueue_pushContentItemsUpdate;
- (id)_artworkCatalogForContentItem:(id)a0;
- (void)_becomeActiveIfPossibleWithCompletion:(id /* block */)a0;
- (void)_becomeActiveWithCompletion:(id /* block */)a0;
- (id)_childContentItemForContentItem:(id)a0 index:(long long)a1;
- (void)_contentItemChangedNotification:(id)a0;
- (id)_contentItemForIdentifier:(id)a0;
- (id)_contentItemForIdentifier:(id)a0 alreadyOnDataSourceQueue:(char)a1;
- (id)_contentItemIDsInRange:(struct { long long x0; long long x1; })a0 itemsRange:(struct { long long x0; long long x1; } *)a1;
- (void)_getMetadataForContentItem:(id)a0 completion:(id /* block */)a1;
- (void)_getTransportablePlaybackSessionRepresentationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_initializeNowPlayingInfo;
- (void)_invalidatePlaybackQueueImmediatelyWithCompletion:(id /* block */)a0;
- (id)_onDataSourceQueue_artworkCatalogForContentItem:(id)a0;
- (void)_onDataSourceQueue_getContentItemIDsInRange:(struct _MSVSignedRange { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (void)_onQueue_clearPlaybackQueueDataSourceCallbacks;
- (void)_onQueue_pushNowPlayingInfoAndRetry:(char)a0;
- (void)_onQueue_registerLyricsDelegateCallbacks:(id)a0;
- (void)_onQueue_registerPlaybackQueueDataSourceCallbacks:(id)a0;
- (id)_onQueue_stateDictionary;
- (id /* block */)artworkCatalogBlockForContentItem:(id)a0;
- (id)initWithPlayerID:(id)a0;
- (void)invalidatePlaybackQueueWithCompletion:(id /* block */)a0;

@end
