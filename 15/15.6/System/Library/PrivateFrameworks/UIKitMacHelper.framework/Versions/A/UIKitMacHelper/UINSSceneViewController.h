@class UINSSceneView, NSString, UIScene, UINSWindowProxy;

@interface UINSSceneViewController : NSViewController {
    char _didSetupKVO;
    char _isFullscreenScene;
    char _doingConstraintsUpdateForScreenSizeChange;
    struct CGSize { double width; double height; } _lastUsableScreenSizeForWindowed;
    unsigned long long _pendingUpdates;
    char _isWindowDragging;
    char _isWindowFrameAnimating;
}

@property (class, nonatomic) double defaultUIScaleFactorForIdiom;
@property (class, nonatomic) double defaultUIScaleFactorForWindows;
@property (class, nonatomic) char downscaleWindowIfNecessary;

@property (nonatomic) unsigned int hostedContextID;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) UIScene *UIScene;
@property (retain, nonatomic) UINSSceneView *sceneView;
@property (readonly, nonatomic) double effectiveScaleFactorForLayout;
@property (readonly, nonatomic) double effectiveScaleFactorForExitFullscreenTransition;
@property (readonly) UINSWindowProxy *windowProxy;
@property (readonly, nonatomic) char providesContentViewToHostWindow;
@property (readonly, nonatomic) long long hostingSceneType;
@property (nonatomic, getter=isSceneViewPinned) char sceneViewPinned;
@property (nonatomic, getter=isSceneViewZoomEnabled) char sceneViewZoomEnabled;
@property (nonatomic, getter=isTransitioningToFullscreen) char transitioningToFullscreen;
@property (nonatomic, getter=isTransitioningFromFullscreen) char transitioningFromFullscreen;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (char)_allowStyleMaskModifications;
- (void)_availableScreenSizeDidChange;
- (void)_doUpdates:(id)a0;
- (void)_doUpdatesDeferred;
- (void)_doUpdatesImmediately;
- (double)_effectiveScaleFactorForLayoutWithOverride:(char)a0;
- (void)_postDisplayChangeNotification;
- (id)_sceneContainerView;
- (void)_updateCounterRotationAndDoLayout;
- (void)_updateCounterRotationFromDefaults;
- (void)_updateSizeRestrictions;
- (void)_updateZoomFactors;
- (void)_updateZoomFactorsAndDoLayout;
- (struct CGSize { double x0; double x1; })_usableScreenSizeWithSceneSize:(struct CGSize { double x0; double x1; })a0 shouldOverride:(char)a1;
- (void)_windowDraggingEndedNotification:(id)a0;
- (void)_windowDraggingStartedNotification:(id)a0;
- (void)forceUpdateSizeRestrictions;
- (id)initWithSceneType:(long long)a0;
- (void)sceneViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)setNeedsSizeRestrictionsUpdate;

@end
