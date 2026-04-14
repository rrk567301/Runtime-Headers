@class NSDate, MRPlayerPath, NSArray, MRNowPlayingArtwork, MRPlaybackQueue, MRPlaybackQueueSubscriptionController, NSDictionary, MRNowPlayingPlayerClientCallbacks, NSObject, NSMutableDictionary, NSMutableArray, MRContentItem;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClient : NSObject <MRNowPlayingClientState, MRTransactionSourceDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_replayQueue;
    double _canBeNowPlayingPlayerTimestamp;
    MRPlaybackQueue *_playbackQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    unsigned int _playbackState;
    NSDate *_playbackStateDate;
    unsigned long long _capabilities;
    NSDate *_lastReceivedCommandDate;
    NSDate *_activeRequestedDate;
    BOOL _pictureInPictureEnabled;
    BOOL _invalidatingPlaybackQueue;
    double _invalidatationTimestamp;
    NSMutableDictionary *_coelscingTransactionPackets;
    NSMutableArray *_transactionSources;
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;
    NSMutableDictionary *_cachedContentItemChangedForPendingPlaybackQueueRequest;
    NSMutableArray *_enqueuedContentItemChangesForPendingPlaybackQueueInvalidation;
}

@property (nonatomic) BOOL invalidatingPlaybackQueue;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (nonatomic) BOOL canBeNowPlayingPlayer;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
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

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithPlayerPath:(id)a0;
- (void)updatePlayer:(id)a0;
- (void)updatePlaybackState:(unsigned int)a0 date:(id)a1;
- (void)restoreNowPlayingClientState;
- (unsigned int)resolveCommand:(unsigned int)a0;
- (id)resolveCommandOptions:(unsigned int)a0 options:(id)a1;
- (void)clearCachedContentItemArtworkForItems:(id)a0;
- (void)sendContentItemChanges:(id)a0;
- (void)transactionDidEnd:(id)a0;
- (void)invalidatePlaybackQueue;
- (void)invalidatePlaybackQueueWithPlaybackQueue:(id)a0;
- (void)sendTransaction:(unsigned long long)a0 withPackets:(id)a1;
- (void)flushPendingPlaybackSessionMigrateEvents:(id /* block */)a0;
- (void)beginSendingTransactions;
- (void)endSendingTransactions;
- (void)addPendingRequest:(id)a0;
- (void)startCachingContentItemUpdatesForItem:(id)a0 forPendingRequest:(id)a1;
- (void)updatePlaybackQueueWithCachedUpdates:(id)a0 forPendingRequest:(id)a1;
- (void)addPendingPlaybackSessionMigrateEvent:(id)a0;
- (BOOL)removePendingPlaybackSessionMigrateEvent:(id)a0;

@end
