@class AVPlayerLooper, AVQueuePlayer, AVPlayerLayer, LPVideo;

@interface LPStreamingVideoView : LPVisualMediaView {
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerLayer *_playerLayer;
    id /* block */ _readyForDisplayCallback;
    char _hasCreatedVideoPlayerView;
    char _isWaitingToRetryAfterFailingToPlay;
    unsigned int _playbackRetryCountWithoutSuccess;
    char _desiredPlayingState;
    float _desiredVolume;
}

@property (readonly, nonatomic) LPVideo *media;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)isMuted;
- (void)setVolume:(double)a0;
- (double)volume;
- (void)setMuted:(char)a0;
- (void)setPlaying:(char)a0;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)beginLoadingMediaForPreroll;
- (void)createPlayerIfNeeded;
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)a0 completionHandler:(id /* block */)a1;
- (id)createVideoPlayerView;
- (void)destroyPlayer;
- (void)didFailToPlay;
- (id)initWithHost:(id)a0 video:(id)a1 style:(id)a2 posterFrame:(id)a3 posterFrameStyle:(id)a4 configuration:(id)a5;
- (void)layoutComponentView;
- (char)releaseDecodingResourcesIfInactive;
- (void)resetToPlaceholderView;
- (char)shouldAutoPlay;
- (char)shouldShowMuteButton;
- (char)usesSharedAudioSession;

@end
