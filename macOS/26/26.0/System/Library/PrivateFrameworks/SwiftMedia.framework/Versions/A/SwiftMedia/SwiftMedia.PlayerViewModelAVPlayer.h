@class AVPlayer, AVPlayerItem;

@interface SwiftMedia.PlayerViewModelAVPlayer : NSObject {
    void /* unknown type, empty encoding */ _windowState;
    void /* unknown type, empty encoding */ _isWindowStateTransitioning;
    void /* unknown type, empty encoding */ _interstitialsState;
    void /* unknown type, empty encoding */ _timelineAnchor;
    void /* unknown type, empty encoding */ _timelineResolution;
    void /* unknown type, empty encoding */ _nowPlayingUpdateMode;
    void /* unknown type, empty encoding */ _playbackSpeeds;
    void /* unknown type, empty encoding */ _timelineIsBeingScrubbed;
    void /* unknown type, empty encoding */ _metadata;
    void /* unknown type, empty encoding */ _subtitleOptions;
    void /* unknown type, empty encoding */ _audioOptions;
    void /* unknown type, empty encoding */ _legibleContentInsets;
    void /* unknown type, empty encoding */ _allowedExperiences;
    void /* unknown type, empty encoding */ _showsOutputRoutePickerButton;
    void /* unknown type, empty encoding */ _mediaControlsVisibility;
    void /* unknown type, empty encoding */ _airplayMenuIsPresented;
    void /* unknown type, empty encoding */ _userInteractionCount;
    void /* unknown type, empty encoding */ _liveInfo;
    void /* unknown type, empty encoding */ _timeState;
    void /* unknown type, empty encoding */ _controlsTemporarilyVisible;
    void /* unknown type, empty encoding */ __isPlaying;
    void /* unknown type, empty encoding */ __playbackSpeed;
    void /* unknown type, empty encoding */ __volume;
    void /* unknown type, empty encoding */ __isMuted;
    void /* unknown type, empty encoding */ _volumeBeforeMute;
    void /* unknown type, empty encoding */ __hasLiveContent;
    void /* unknown type, empty encoding */ __isReadyToPlay;
    void /* unknown type, empty encoding */ __duration;
    void /* unknown type, empty encoding */ __currentSubtitleOption;
    void /* unknown type, empty encoding */ __currentAudioOption;
    void /* unknown type, empty encoding */ nowPlayingMedia;
    void /* unknown type, empty encoding */ mediaSelectionController;
    void /* unknown type, empty encoding */ livePlayerController;
    void /* unknown type, empty encoding */ activeMutations;
    void /* unknown type, empty encoding */ controlsTimer;
    void /* unknown type, empty encoding */ timeObservationInfo;
    void /* unknown type, empty encoding */ wantsTimeObserver;
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ volumeObservation;
    void /* unknown type, empty encoding */ mutedObservation;
    void /* unknown type, empty encoding */ rateObservation;
    void /* unknown type, empty encoding */ currentItemObservation;
    void /* unknown type, empty encoding */ allowsExternalPlaybackObservation;
    void /* unknown type, empty encoding */ playerItemStatusObservation;
    void /* unknown type, empty encoding */ playerItemDurationObservation;
    void /* unknown type, empty encoding */ playerItemMetadataObservation;
    void /* unknown type, empty encoding */ playerItemTimeJumpedObservation;
    void /* unknown type, empty encoding */ playerItemMediaSelectionObservation;
    void /* unknown type, empty encoding */ cmTimePreferredTimescale;
    void /* unknown type, empty encoding */ interstitialController;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, retain) AVPlayerItem *playerItem;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
