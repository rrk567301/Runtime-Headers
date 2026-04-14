@class WebWindowFadeAnimation, NSString, WebCoreFullScreenWindow, WebAVPlayerView, NSWindow;

@interface WebVideoFullscreenController : NSWindowController <WebAVPlayerViewDelegate, NSWindowDelegate> {
    struct RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>> { struct HTMLVideoElement *m_ptr; } _videoElement;
    NSWindow *_backgroundFullscreenWindow;
    WebWindowFadeAnimation *_fadeAnimation;
    BOOL _isEndingFullscreen;
    BOOL _forceDisableAnimation;
    struct RefPtr<WebCore::PlaybackSessionModelMediaElement, WTF::RawPtrTraits<WebCore::PlaybackSessionModelMediaElement>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionModelMediaElement>> { struct PlaybackSessionModelMediaElement *m_ptr; } _playbackModel;
    struct RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceAVKit>> { struct PlaybackSessionInterfaceAVKit *m_ptr; } _playbackInterface;
    struct RetainPtr<NSView> { void *m_ptr; } _contentOverlay;
    BOOL _isFullScreen;
}

@property (readonly) WebCoreFullScreenWindow *fullscreenWindow;
@property (readonly) WebAVPlayerView *playerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)applicationDidResignActive:(id)a0;
- (id)customWindowsToEnterFullScreenForWindow:(id)a0;
- (void)window:(id)a0 startCustomAnimationToEnterFullScreenWithDuration:(double)a1;
- (id)customWindowsToExitFullScreenForWindow:(id)a0;
- (void)window:(id)a0 startCustomAnimationToExitFullScreenWithDuration:(double)a1;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowWillExitFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)windowDidLoad;
- (struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement *x0; })videoElement;
- (void)setVideoElement:(struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement *x0; })a0;
- (void)enterFullscreen:(id)a0;
- (void)exitFullscreen;
- (void)_requestExit;
- (void)_requestEnter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoElementRect;
- (BOOL)playerViewIsFullScreen:(id)a0;
- (void)playerViewRequestEnterFullscreen:(id)a0;
- (void)playerViewRequestExitFullscreen:(id)a0;

@end
