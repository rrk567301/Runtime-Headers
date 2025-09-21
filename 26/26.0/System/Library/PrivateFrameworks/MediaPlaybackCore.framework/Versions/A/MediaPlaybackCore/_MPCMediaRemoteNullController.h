@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
    MPCFuture *_playbackQueueFuture;
    MPCFuture *_contentItemForIdentifierFuture;
    MPCFuture *_contentItemArtworkForIdentifierFuture;
    MPCFuture *_contentItemRemoteArtworkForIdentifierFuture;
    MPCFuture *_contentItemAnimatedArtworkPreviewFrameForIdentifierFuture;
    MPCFuture *_contentItemAnimatedArtworkForIdentifierFuture;
    MPCFuture *_participantsFuture;
}

+ (BOOL)_shouldRegisterForNotifications;

- (id)_init;
- (id)contentItemForIdentifier:(id)a0;
- (id)playbackState;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)supportedCommands;
- (void).cxx_destruct;
- (id)contentItemAnimatedArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2 artworkFormat:(id)a3;
- (id)contentItemAnimatedArtworkPreviewFrameForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2 artworkFormat:(id)a3;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)contentItemArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (long long)contentItemCacheStateForIdentifier:(id)a0;
- (id)contentItemRemoteArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2 artworkFormat:(id)a3;
- (void)invalidateAllTokens;
- (id)playbackQueueForRequest:(id)a0;
- (id)playbackQueueParticipants;
- (long long)playbackQueueParticipantsCacheState;
- (long long)playbackStateCacheState;
- (long long)supportedCommandsCacheState;

@end
