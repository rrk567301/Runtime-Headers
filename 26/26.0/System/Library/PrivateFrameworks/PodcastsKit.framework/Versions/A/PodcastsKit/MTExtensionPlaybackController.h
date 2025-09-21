@interface MTExtensionPlaybackController : NSObject

+ (void)_setPlaybackQueueWithIdentifier:(id)a0 startPlayback:(BOOL)a1 assetInfo:(id)a2 requesterSharedUserId:(id)a3 sharedUserIdFromPlayableITunesAccount:(id)a4 playerID:(id)a5 mrCompletion:(id /* block */)a6;
+ (struct _MRSystemAppPlaybackQueue { } *)playbackQueueForIdentifier:(id)a0 startPlayback:(BOOL)a1 assetInfo:(id)a2;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)a0 assetInfo:(id)a1 requesterSharedUserId:(id)a2 sharedUserIdFromPlayableITunesAccount:(id)a3 mrCompletion:(id /* block */)a4;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)a0 mrCompletion:(id /* block */)a1;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)a0 startPlayback:(BOOL)a1 assetInfo:(id)a2 requesterSharedUserId:(id)a3 sharedUserIdFromPlayableITunesAccount:(id)a4 completion:(id /* block */)a5;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)a0 startPlayback:(BOOL)a1 assetInfo:(id)a2 requesterSharedUserId:(id)a3 sharedUserIdFromPlayableITunesAccount:(id)a4 mrCompletion:(id /* block */)a5;

@end
