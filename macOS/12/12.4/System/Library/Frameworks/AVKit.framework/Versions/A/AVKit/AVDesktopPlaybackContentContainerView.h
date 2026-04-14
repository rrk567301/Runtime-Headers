@class AVUnsupportedContentIndicatorView, AVAudioOnlyIndicatorView, AVLoadingIndicatorView, AVDesktopPlayerLayerView, AVDesktopExternalPlaybackIndicatorView;

@interface AVDesktopPlaybackContentContainerView : NSView {
    unsigned long long _activeContentDisplayType;
    AVAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    AVDesktopExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    AVLoadingIndicatorView *_loadingIndicatorView;
    AVDesktopPlayerLayerView *_playerLayerView;
    AVUnsupportedContentIndicatorView *_unsupportedContentIndicatorView;
    BOOL _initializingPlayerLayerView;
}

@property (readonly, nonatomic) AVAudioOnlyIndicatorView *audioOnlyIndicatorView;
@property (readonly, nonatomic) AVLoadingIndicatorView *loadingIndicatorView;
@property (readonly, nonatomic) AVUnsupportedContentIndicatorView *unsupportedContentIndicatorView;
@property (nonatomic) unsigned long long contentDisplayType;
@property (readonly, nonatomic) AVDesktopPlayerLayerView *playerLayerView;
@property (readonly, nonatomic) AVDesktopExternalPlaybackIndicatorView *externalPlaybackIndicatorView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateActiveContentDisplayTypeIfNeeded;
- (void)_setUpExternalPlaybackIndicatorView;
- (void)_setUpPlayerLayerViewIfNeeded;
- (id)_viewForContentDisplayType:(unsigned long long)a0;
- (void)_displayPlaybackContentView:(id)a0;
- (void)_updateBackingLayerIfNeeded;
- (void)_setUpAudioOnlyIndicatorView;
- (void)_setUpLoadingIndicatorView;
- (void)_setUpUnsupportedContentIndicatorView;

@end
