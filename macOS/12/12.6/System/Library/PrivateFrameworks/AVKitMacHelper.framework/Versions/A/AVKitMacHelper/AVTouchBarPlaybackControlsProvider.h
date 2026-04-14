@class NSTouchBar, NSString, AVTouchBarMediaSelectionViewController, AVTouchBarMediaSelectionButtonViewController, AVTouchBarPlaybackControlsViewController, NSPopoverTouchBarItem, AVTouchBarPlaybackRateViewController, NSCustomTouchBarItem, AVPlaybackRateCollection, AVTouchBarPlayButtonViewController, AVObservationController;
@protocol AVTouchBarPlaybackControlsControllingInternal, AVTimeControlling, AVTouchBarPlaybackControlsControlling, AVTouchBarMediaSelectionControlling, AVTouchBarTrackControlling;

@interface AVTouchBarPlaybackControlsProvider : NSResponder <AVTouchBarScrubberDelegate, AVTouchBarPlaybackRateSelectionDelegate, AVPlaybackRateCollectionDelegate, AVTouchBarMediaSelectionViewControllerDelegate, AVTouchBarMediaSelectionButtonViewControllerDelegate, NSTouchBarDelegate, NSTouchBarProvider> {
    NSTouchBar *_touchBar;
    id<AVTouchBarPlaybackControlsControlling> _playbackControlsController;
    id<AVTouchBarMediaSelectionControlling, AVTouchBarPlaybackControlsControllingInternal, AVTouchBarTrackControlling, AVTimeControlling> _playerController;
    NSCustomTouchBarItem *_playbackControlsTouchBarItem;
    NSPopoverTouchBarItem *_compactTouchBarScrubberItem;
    AVTouchBarPlaybackControlsViewController *_touchBarPlaybackControlsViewController;
    NSPopoverTouchBarItem *_mediaSelectionButtonTouchBarItem;
    NSCustomTouchBarItem *_mediaSelectionOptionsTouchBarItem;
    AVTouchBarMediaSelectionButtonViewController *_touchBarMediaSelectionButtonViewController;
    AVTouchBarMediaSelectionViewController *_touchBarMediaSelectionViewController;
    AVObservationController *_observationController;
    NSCustomTouchBarItem *_rateOptionsTouchBarItem;
    AVTouchBarPlaybackRateViewController *_touchBarRateViewController;
    NSPopoverTouchBarItem *_playButtonTouchBarItem;
    AVTouchBarPlayButtonViewController *_touchBarPlayButtonViewController;
    id _playbackRateCollectionObservationToken;
}

@property (readonly, nonatomic) AVTouchBarPlaybackControlsViewController *touchBarPlaybackControlsViewController;
@property (retain, nonatomic) id<AVTouchBarMediaSelectionControlling, AVTouchBarPlaybackControlsControllingInternal, AVTouchBarTrackControlling, AVTimeControlling> playerController;
@property (nonatomic) BOOL prefersCompactTouchBarScrubber;
@property (readonly) NSTouchBar *touchBar;
@property (retain) id<AVTouchBarPlaybackControlsControlling> playbackControlsController;
@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)reloadThumbailsOrAudioWaveform;
- (void)touchBarPlaybackRateViewController:(id)a0 didSelectRate:(id)a1;
- (void)playbackRateCollection:(id)a0 selectedPlaybackRateDidChangeTo:(id)a1;
- (void)touchBarMediaSelectionViewController:(id)a0 didSelectAudioTouchBarMediaSelectionOption:(id)a1;
- (void)touchBarMediaSelectionViewController:(id)a0 didSelectLegibleTouchBarMediaSelectionOption:(id)a1;
- (void)updateTouchBarItemIdentifiersForTouchBar:(id)a0;
- (BOOL)isTouchBarPlaybackControlsViewControllerLoaded;
- (BOOL)isTouchBarMediaSelectionViewControllerLoaded;
- (id)touchBarMediaSelectionViewController;
- (id)touchBarPlayButtonViewController;
- (id)touchBarRateViewController;
- (id)_playerControllerIfAVPlayerController;
- (id)touchBarMediaSelectionButtonViewController;
- (void)touchBarScrubber:(id)a0 presentMediaSelectionViewControllerInPopover:(id)a1;
- (void)touchBarMediaSelectionButtonViewControllerPresentMediaSelectionPopover:(id)a0;
- (BOOL)isTouchBarMediaSelectionButtonViewControllerLoaded;

@end
