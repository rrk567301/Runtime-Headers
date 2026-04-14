@class AVFunctionBarMediaSelectionViewController, NSString, NSCustomTouchBarItem, AVFunctionBarPlaybackControlsViewController, NSTouchBar, AVPlayerView, NSPopoverTouchBarItem;
@protocol AVFunctionBarTrackControlling, AVTimeControlling, AVFunctionBarMediaSelectionControlling, AVFunctionBarPlaybackControlsControlling, AVFunctionBarPlaybackControlsControllingInternal;

@interface AVFunctionBarPlaybackControlsProvider : NSResponder <AVFunctionBarMediaSelectionViewControllerDelegate, NSTouchBarDelegate, NSTouchBarProvider> {
    NSTouchBar *_functionBar;
    id<AVFunctionBarPlaybackControlsControlling> _playbackControlsController;
    id<AVFunctionBarMediaSelectionControlling, AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarTrackControlling, AVTimeControlling> _playerController;
    AVPlayerView *_playerView;
    NSCustomTouchBarItem *_playbackControlsFunctionBarItem;
    AVFunctionBarPlaybackControlsViewController *_functionBarPlaybackControlsViewController;
    NSPopoverTouchBarItem *_mediaSelectionButtonFunctionBarItem;
    NSCustomTouchBarItem *_mediaSelectionOptionsFunctionBarItem;
    AVFunctionBarMediaSelectionViewController *_functionBarMediaSelectionViewController;
}

@property (retain, nonatomic) id<AVFunctionBarMediaSelectionControlling, AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarTrackControlling, AVTimeControlling> playerController;
@property (weak) AVPlayerView *playerView;
@property (readonly) NSTouchBar *touchBar;
@property (retain) id<AVFunctionBarPlaybackControlsControlling> playbackControlsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)functionBarMediaSelectionViewController;
- (void)functionBarMediaSelectionViewController:(id)a0 didSelectAudioFunctionBarMediaSelectionOption:(id)a1;
- (void)functionBarMediaSelectionViewController:(id)a0 didSelectLegibleFunctionBarMediaSelectionOption:(id)a1;
- (id)functionBarPlaybackControlsViewController;
- (BOOL)isFunctionBarMediaSelectionViewControllerLoaded;
- (BOOL)isFunctionBarPlaybackControlsViewControllerLoaded;
- (void)reloadThumbailsOrAudioAmplitudeSamples;
- (void)updateFunctionBarItemIdentifiersForFunctionBar:(id)a0;

@end
