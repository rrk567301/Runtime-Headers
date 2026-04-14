@class NSMutableDictionary, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VUIMediaInfoFetchController : NSObject

@property (retain, nonatomic) NSOperationQueue *imageQueue;
@property (retain, nonatomic) NSMutableArray *fetchItems;
@property (retain, nonatomic) NSMutableDictionary *prewarmedPlayers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageDecodingQueue;
@property (nonatomic) long long batchSize;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long playerPreloadOffset;
@property (nonatomic, getter=isPreloadPlaybackEnabled) BOOL preloadPlaybackEnabled;

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)mediaInfoContainsPlayerAtIndex:(unsigned long long)a0;
- (void)preloadPlayback;
- (id)_prewarmIndices;
- (void)_updateImageOperationPriorities;
- (id)_createPlayerWithPlaylist:(id)a0 isForPrewarming:(BOOL)a1;
- (id)_identifierForPlaylist:(id)a0 isForPrewarming:(BOOL)a1;
- (void)_loadImageAtIndex:(unsigned long long)a0 isQuoteImage:(BOOL)a1 completion:(id /* block */)a2;
- (void)_populateQueueWithMediaInfos:(id)a0 isAppend:(BOOL)a1;
- (void)_removePrewarmedPlayerForIdentifier:(id)a0;
- (void)_updatePrewarmedPlayers;
- (void)appendMediaInfos:(id)a0;
- (void)clearCachedImageExclude:(long long)a0;
- (void)clearPreloadedPlayback;
- (id)initWithMediaInfos:(id)a0;
- (void)loadImageAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)loadPlayerAtIndex:(unsigned long long)a0;
- (void)loadQuoteImageAtIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)mediaInfoAtIndexEnforcesVideoOnly:(unsigned long long)a0;
- (BOOL)mediaInfoContainsImageAtIndex:(unsigned long long)a0;
- (id)mediaInfos;
- (void)mediaInfosDidChange;
- (void)populatePlaylistWithMediaItems:(id)a0 atIndex:(unsigned long long)a1;
- (void)preLoadNextImageFromCurrentIndexIfNeeded:(long long)a0;
- (long long)queuePriorityForIndex:(long long)a0 itemCount:(long long)a1 selectedIndex:(long long)a2;
- (void)removeMediaInfoAtIndex:(unsigned long long)a0;
- (void)removePopulatedMediaItems:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMediaInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)setMediaInfos:(id)a0;
- (void)startImageOperationAtIndex:(long long)a0;

@end
