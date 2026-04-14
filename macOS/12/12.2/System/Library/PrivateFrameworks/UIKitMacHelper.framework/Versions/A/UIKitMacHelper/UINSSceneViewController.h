@class UINSSceneView, NSString, UIScene, UINSWindowProxy;

@interface UINSSceneViewController : NSViewController {
    BOOL _didSetupKVO;
    BOOL _isFullscreenScene;
    BOOL _doingConstraintsUpdateForScreenSizeChange;
    struct CGSize { double width; double height; } _lastUsableScreenSizeForWindowed;
    unsigned long long _pendingUpdates;
    BOOL _isWindowDragging;
}

@property (class, nonatomic) double defaultUIScaleFactorForIdiom;
@property (class, nonatomic) double defaultUIScaleFactorForWindows;
@property (class, nonatomic) BOOL downscaleWindowIfNecessary;

@property (retain, nonatomic) NSString *sceneIdentifier;
@property (retain, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) UIScene *UIScene;
@property (retain, nonatomic) UINSSceneView *sceneView;
@property (readonly, nonatomic) double effectiveScaleFactorForLayout;
@property (readonly, nonatomic) double effectiveScaleFactorForExitFullscreenTransition;
@property (readonly) UINSWindowProxy *windowProxy;
@property (readonly, nonatomic) BOOL providesContentViewToHostWindow;
@property (readonly, nonatomic) long long hostingSceneType;
@property (nonatomic, getter=isSceneViewPinned) BOOL sceneViewPinned;
@property (nonatomic, getter=isSceneViewZoomEnabled) BOOL sceneViewZoomEnabled;
@property (nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;
@property (nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)setNeedsSizeRestrictionsUpdate;
- (id)initWithSceneType:(long long)a0;
- (double)_effectiveScaleFactorForLayoutWithOverride:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_usableScreenSizeWithSceneSize:(struct CGSize { double x0; double x1; })a0 shouldOverride:(BOOL)a1;
- (double)_maxScaleForSceneSize:(struct CGSize { double x0; double x1; })a0 inDisplaySize:(struct CGSize { double x0; double x1; })a1;
- (id)_sceneContainerView;
- (void)_availableScreenSizeDidChange;
- (void)_updateZoomFactorsAndDoLayout;
- (void)_windowDraggingStartedNotification:(id)a0;
- (void)_windowDraggingEndedNotification:(id)a0;
- (void)_doUpdatesDeferred;
- (void)_doUpdatesImmediately;
- (void)_doUpdates:(id)a0;
- (void)_postDisplayChangeNotification;
- (void)_sceneCurSize:(struct CGSize { double x0; double x1; } *)a0 minSize:(struct CGSize { double x0; double x1; } *)a1 maxSize:(struct CGSize { double x0; double x1; } *)a2 maxScreenSize:(struct CGSize { double x0; double x1; } *)a3;
- (void)_updateSizeRestrictions;
- (void)_updateZoomFactors;
- (void)sceneViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)forceUpdateSizeRestrictions;

@end
