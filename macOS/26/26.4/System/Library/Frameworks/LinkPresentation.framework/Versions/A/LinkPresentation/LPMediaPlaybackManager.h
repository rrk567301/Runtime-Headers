@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {
    NSHashTable *_mediaPlayers;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)addMediaPlayer:(id)a0;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)a0;
- (void)mediaPlayer:(id)a0 didChangeMutedState:(BOOL)a1;
- (void)mediaPlayer:(id)a0 didChangePlayingState:(BOOL)a1;
- (BOOL)releaseDecodingResourcesForInactivePlayers;
- (void)removeMediaPlayer:(id)a0;

@end
