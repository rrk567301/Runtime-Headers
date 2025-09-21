@class NSWindow, NSString, NSViewController, PIPViewController, WebAVPlayerLayer, WebVideoViewContainer;

@interface WebVideoPresentationInterfaceMacObjC : NSObject <PIPViewControllerDelegate, WebVideoViewContainerDelegate> {
    void *_videoPresentationInterfaceMac;
    struct RetainPtr<PIPViewController> { PIPViewController *m_ptr; } _pipViewController;
    struct RetainPtr<NSViewController> { NSViewController *m_ptr; } _videoViewContainerController;
    struct RetainPtr<WebVideoViewContainer> { WebVideoViewContainer *m_ptr; } _videoViewContainer;
    struct RetainPtr<WebAVPlayerLayer> { WebAVPlayerLayer *m_ptr; } _playerLayer;
    int _pipState;
    struct RetainPtr<NSWindow> { NSWindow *m_ptr; } _returningWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _returningRect;
    double _rate;
    long long _timeControlStatus;
    double _duration;
    double _anchorTime;
    double _elapsedTime;
}

@property (nonatomic) struct CGSize { double width; double height; } videoDimensions;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, getter=isPlaybackStateEnabled) BOOL playbackStateEnabled;
@property (nonatomic) BOOL canSkipAd;
@property (nonatomic, getter=isExitingToStandardFullscreen) BOOL exitingToStandardFullscreen;
@property (readonly, nonatomic) double estimatedElapsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDuration:(double)a0;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)exitPIP;
- (BOOL)pipShouldClose:(id)a0;
- (void)pipActionPause:(id)a0;
- (void)updateCurrentTime:(double)a0 atAnchorTime:(double)a1;
- (void)boundsDidChangeForVideoViewContainer:(id)a0;
- (void)enterPIP;
- (void)exitPIPAnimatingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inWindow:(id)a1;
- (id)initWithVideoPresentationInterfaceMac:(void *)a0;
- (void)invalidateFullscreenState;
- (void)pipActionPlay:(id)a0;
- (void)pipActionSkipPreroll:(id)a0;
- (void)pipActionStop:(id)a0;
- (void)pipDidClose:(id)a0;
- (void)setUpPIPForVideoView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inWindow:(id)a2;
- (void)superviewDidChangeForVideoViewContainer:(id)a0;
- (void)updateCanSkipAd:(BOOL)a0;
- (void)updatePrerollAttributes;
- (void)updateRate:(double)a0 andTimeControlStatus:(long long)a1;
- (void)updateRate:(double)a0 currentTime:(double)a1 atAnchorTime:(double)a2;

@end
