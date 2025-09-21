@class NSString, NSWindow, AVKitMacHelperPIPViewController;
@protocol AVPictureInPictureControllerMacHelperDelegate;

@interface AVPictureInPictureControllerMacHelper : NSObject <AVPictureInPictureControllerMacHelper, PIPSafariViewControllerDelegate>

@property (retain, nonatomic) AVKitMacHelperPIPViewController *pipViewController;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) float rate;
@property (nonatomic) double elapsedTime;
@property (nonatomic) long long timeControlStatus;
@property (nonatomic) double contentDuration;
@property (weak, nonatomic) NSWindow *appNSWindow;
@property (nonatomic) long long controlsStyle;
@property (weak, nonatomic) id<AVPictureInPictureControllerMacHelperDelegate> delegate;
@property (nonatomic, getter=isMicrophoneEnabled) BOOL microphoneEnabled;
@property (nonatomic) struct CGSize { double width; double height; } contentAspectRatio;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (nonatomic) BOOL showsMuteUnmuteControls;
@property (nonatomic) BOOL includesMicrophoneControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPictureInPicture;
- (void).cxx_destruct;
- (void)pipActionClose:(id)a0;
- (void)pipAction:(id)a0 setMicrophoneMuted:(BOOL)a1;
- (void)pipAction:(id)a0 setPlaying:(BOOL)a1;
- (void)pipAction:(id)a0 skipInterval:(double)a1;
- (void)pipActionPrerollAction:(id)a0;
- (void)pipActionRestore:(id)a0;
- (void)stopPictureInPictureAndRestoreUserInterface:(BOOL)a0;
- (id)copyFence;
- (void)setPlaybackRate:(double)a0 elapsedTime:(double)a1 timeControlStatus:(long long)a2 contentDuration:(double)a3;
- (void)showContentsOfLayerAsPictureInPicture:(id)a0 sourceVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sourceUIWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)_dismissPictureInPicture:(BOOL)a0 restoreWindowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updatePIPViewControllerPlaybackState;

@end
