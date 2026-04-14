@class NSMutableDictionary, MRPlaybackQueue, NSDate, NSDictionary, MRNowPlayingPlayerClientCallbacks, NSObject, NSMutableArray, MRContentItem, NSString, MRPlaybackQueueSubscriptionController, MRPlayerPath, NSMutableSet, NSArray, MRNowPlayingArtwork;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replayQueue;
    double _canBeNowPlayingPlayerTimestamp;
    MRPlaybackQueue *_playbackQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    NSString *_nowPlayingArtworkID;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    NSMutableDictionary *_nowPlayingAnimatedArtwork;
    unsigned int _playbackState;
    NSDate *_playbackStateDate;
    unsigned long long _capabilities;
    NSDate *_lastReceivedCommandDate;
    NSDate *_activeRequestedDate;
    BOOL _pictureInPictureEnabled;
    BOOL _invalidatingPlaybackQueue;
    double _invalidatationTimestamp;
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;
    NSMutableDictionary *_cachedContentItemChangedForPendingPlaybackQueueRequest;
    NSMutableArray *_enqueuedContentItemChangesForPendingPlaybackQueueInvalidation;
    NSMutableSet *_homeUserIdentifiers;
}

@property (nonatomic) BOOL invalidatingPlaybackQueue;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (nonatomic) BOOL canBeNowPlayingPlayer;
@property (readonly, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (retain, nonatomic) NSString *nowPlayingArtworkID;
@property (retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
@property (readonly, nonatomic) NSArray *nowPlayingAnimatedArtworkFormats;
@property (readonly, nonatomic) unsigned int playbackState;
@property (nonatomic) double invalidatationTimestamp;
@property (retain, nonatomic) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) MRContentItem *nowPlayingContentItem;
@property (readonly, nonatomic) BOOL hasReceivedCommandRecently;
@property (nonatomic, getter=isPictureInPictureEnabled) BOOL pictureInPictureEnabled;
@property (retain, nonatomic) NSDate *activeRequestedDate;
@property (readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (readonly, nonatomic) MRNowPlayingPlayerClientCallbacks *clientCallbacks;

- (id)homeUserIdentifiers;
- (id)initWithPlayerPath:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)clearHomeUserIdentifiers;
- (id)debugDescription;
- (void)addPendingRequest:(id)a0;
- (void)updatePlaybackQueueWithCachedUpdates:(id)a0 forPendingRequest:(id)a1;
- (void)flushPendingPlaybackSessionMigrateEvents:(id /* block */)a0;
- (void)sendContentItemChanges:(id)a0;
- (void)updatePlaybackState:(unsigned int)a0 date:(id)a1;
- (void)appendHomeUserIdentifier:(id)a0;
- (void)invalidatePlaybackQueueWithPlaybackQueue:(id)a0;
- (id)description;
- (BOOL)removePendingPlaybackSessionMigrateEvent:(id)a0;
- (void)setNowPlayingAnimatedArtwork:(id)a0 forFormat:(id)a1;
- (id)resolveCommandOptions:(unsigned int)a0 options:(id)a1;
- (void)setSupportedCommands:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setHomeUserIdentifier:(id)a0;
- (void)addPendingPlaybackSessionMigrateEvent:(id)a0;
- (void)startCachingContentItemUpdatesForItem:(id)a0 forPendingRequest:(id)a1;
- (void)updatePlayer:(id)a0;
- (void)invalidatePlaybackQueue;
- (void)clearCachedContentItemArtworkForItems:(id)a0;
- (unsigned int)resolveCommand:(unsigned int)a0;
- (void).cxx_destruct;
- (id)nowPlayingAnimatedArtworkForFormat:(id)a0;

@end
