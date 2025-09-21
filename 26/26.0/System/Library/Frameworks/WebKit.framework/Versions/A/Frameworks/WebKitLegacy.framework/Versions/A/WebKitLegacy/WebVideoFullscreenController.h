@class WebWindowFadeAnimation, NSString, WebCoreFullScreenWindow, NSView, WebAVPlayerView, NSWindow;

@interface WebVideoFullscreenController : NSWindowController <WebAVPlayerViewDelegate, NSWindowDelegate> {
    struct RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>> { struct HTMLVideoElement *m_ptr; } _videoElement;
    NSWindow *_backgroundFullscreenWindow;
    WebWindowFadeAnimation *_fadeAnimation;
    BOOL _isEndingFullscreen;
    BOOL _forceDisableAnimation;
    struct RefPtr<WebCore::PlaybackSessionModelMediaElement, WTF::RawPtrTraits<WebCore::PlaybackSessionModelMediaElement>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionModelMediaElement>> { struct PlaybackSessionModelMediaElement *m_ptr; } _playbackModel;
    struct RefPtr<WebCore::PlaybackSessionInterfaceIOS, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceIOS>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceIOS>> { struct PlaybackSessionInterfaceIOS *m_ptr; } _playbackInterface;
    struct RetainPtr<NSView> { NSView *m_ptr; } _contentOverlay;
    struct RetainPtr<WebAVPlayerView> { WebAVPlayerView *m_ptr; } _playerView;
    BOOL _isFullScreen;
}

@property (readonly) WebCoreFullScreenWindow *fullscreenWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowDidLoad;
- (void)windowDidExitFullScreen:(id)a0;
- (void)windowWillExitFullScreen:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void)enterFullscreen:(id)a0;
- (void)windowDidEnterFullScreen:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidResignActive:(id)a0;
- (id)customWindowsToEnterFullScreenForWindow:(id)a0;
- (id)customWindowsToExitFullScreenForWindow:(id)a0;
- (void)window:(id)a0 startCustomAnimationToEnterFullScreenWithDuration:(double)a1;
- (void)window:(id)a0 startCustomAnimationToExitFullScreenWithDuration:(double)a1;
- (void)_requestEnter;
- (void)_requestExit;
- (void)exitFullscreen;
- (id)playerView;
- (BOOL)playerViewIsFullScreen:(id)a0;
- (void)playerViewRequestEnterFullscreen:(id)a0;
- (void)playerViewRequestExitFullscreen:(id)a0;
- (void)setVideoElement:(struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement *x0; })a0;
- (struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement *x0; })videoElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoElementRect;

@end
