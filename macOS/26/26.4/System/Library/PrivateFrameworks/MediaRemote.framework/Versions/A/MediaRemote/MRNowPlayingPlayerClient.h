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
- (void)restoreNowPlayingClientState;
- (id)initWithPlayerPath:(id)a0;
- (id)debugDescription;
- (void)setNowPlayingAnimatedArtwork:(id)a0 forFormat:(id)a1;
- (void)setHomeUserIdentifier:(id)a0;
- (id)nowPlayingAnimatedArtworkForFormat:(id)a0;
- (void)addPendingRequest:(id)a0;
- (void)setSupportedCommands:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)invalidatePlaybackQueueWithPlaybackQueue:(id)a0;
- (void)appendHomeUserIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)startCachingContentItemUpdatesForItem:(id)a0 forPendingRequest:(id)a1;
- (void)updatePlaybackState:(unsigned int)a0 date:(id)a1;
- (unsigned int)resolveCommand:(unsigned int)a0;
- (void)clearCachedContentItemArtworkForItems:(id)a0;
- (void)clearHomeUserIdentifiers;
- (void)updatePlaybackQueueWithCachedUpdates:(id)a0 forPendingRequest:(id)a1;
- (void)sendContentItemChanges:(id)a0;
- (id)description;
- (void)invalidatePlaybackQueue;
- (void)updatePlayer:(id)a0;
- (void)flushPendingPlaybackSessionMigrateEvents:(id /* block */)a0;
- (id)resolveCommandOptions:(unsigned int)a0 options:(id)a1;
- (void)addPendingPlaybackSessionMigrateEvent:(id)a0;
- (BOOL)removePendingPlaybackSessionMigrateEvent:(id)a0;

@end
