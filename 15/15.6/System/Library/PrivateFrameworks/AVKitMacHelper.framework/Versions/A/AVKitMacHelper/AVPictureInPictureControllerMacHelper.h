@class NSString, NSWindow, AVKitMacHelperPIPViewController;
@protocol AVPictureInPictureControllerMacHelperDelegate;

@interface AVPictureInPictureControllerMacHelper : NSObject <AVPictureInPictureControllerMacHelper, PIPSafariViewControllerDelegate>

@property (retain, nonatomic) AVKitMacHelperPIPViewController *pipViewController;
@property (nonatomic, getter=isActive) char active;
@property (weak, nonatomic) NSWindow *appNSWindow;
@property (weak, nonatomic) id<AVPictureInPictureControllerMacHelperDelegate> delegate;
@property (nonatomic, getter=isPlaying) char playing;
@property (nonatomic, getter=isMicrophoneEnabled) char microphoneEnabled;
@property (nonatomic) struct CGSize { double width; double height; } contentAspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedSourceRectInWindow;
@property (nonatomic) char showsMuteUnmuteControls;
@property (nonatomic) char includesMicrophoneControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)pipShouldClose:(id)a0;
- (void)pipActionPause:(id)a0;
- (void)pipActionPlay:(id)a0;
- (void)pipActionStop:(id)a0;
- (void)pipDidClose:(id)a0;
- (void)_unsetReplacementRect;
- (void)stopPictureInPicture;
- (void)showContentsOfLayerAsPictureInPicture:(id)a0 sourceUIWindow:(id)a1;
- (void)pipActionMute:(id)a0;
- (void)pipActionUnmute:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceRectInWindow;
- (void)_stopImmediatelyIfActive;
- (void)_updatePIPControls;
- (void)stopPictureInPictureAnimatingBackToSource:(char)a0;

@end
