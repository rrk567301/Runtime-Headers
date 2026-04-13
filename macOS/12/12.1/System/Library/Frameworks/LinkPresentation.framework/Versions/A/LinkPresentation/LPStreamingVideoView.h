@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer;

@interface LPStreamingVideoView : LPVideoView {
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerLayer *_playerLayer;
    id /* block */ _readyForDisplayCallback;
    BOOL _hasCreatedVideoPlayerView;
    BOOL _isWaitingToRetryAfterFailingToPlay;
    unsigned int _playbackRetryCountWithoutSuccess;
    BOOL _desiredPlayingState;
    float _desiredVolume;
}

- (void)dealloc;
- (void).cxx_destruct;
- (double)volume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setVolume:(double)a0;
- (void)setMuted:(BOOL)a0;
- (BOOL)isMuted;
- (void)setPlaying:(BOOL)a0;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (id)initWithHost:(id)a0 video:(id)a1 style:(id)a2 posterFrame:(id)a3 posterFrameStyle:(id)a4 configuration:(id)a5;
- (BOOL)shouldAutoPlay;
- (void)destroyPlayer;
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetToPlaceholderView;
- (void)didFailToPlay;
- (void)createPlayerIfNeeded;
- (void)layoutComponentView;
- (void)beginLoadingMediaForPreroll;
- (BOOL)releaseDecodingResourcesIfInactive;
- (BOOL)usesSharedAudioSession;
- (BOOL)shouldShowMuteButton;
- (id)createVideoPlayerView;

@end
