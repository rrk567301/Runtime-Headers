@class NSHashTable;

@interface LPMediaPlaybackManager : NSObject {
    NSHashTable *_mediaPlayers;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)addMediaPlayer:(id)a0;
- (void)_deactivateAllPlayingMediaPlayersExcept:(id)a0;
- (void)mediaPlayer:(id)a0 didChangeMutedState:(char)a1;
- (void)mediaPlayer:(id)a0 didChangePlayingState:(char)a1;
- (char)releaseDecodingResourcesForInactivePlayers;
- (void)removeMediaPlayer:(id)a0;

@end
