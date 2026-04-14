@class NSString, UINSWindow, NSExtensionContext, UIScene, UINSSceneViewController;

@interface UINSSceneWindowController : NSWindowController <NSWindowDelegate>

@property (weak, nonatomic) NSExtensionContext *extensionContext;
@property (readonly, nonatomic) UINSWindow *sceneWindow;
@property (copy, nonatomic) NSString *currentTitleFromScene;
@property (copy, nonatomic) NSString *currentSubtitleFromScene;
@property (copy, nonatomic) NSString *currentTitleFromNavBar;
@property (copy, nonatomic) NSString *currentSubtitleFromNavBar;
@property (nonatomic) BOOL havePendingTitleChanges;
@property (retain, nonatomic) UIScene *UIScene;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) UINSSceneViewController *sceneViewController;
@property (readonly, nonatomic) unsigned int declinedEventMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowWillEnterFullScreen:(id)a0;
- (unsigned long long)window:(id)a0 willUseFullScreenPresentationOptions:(unsigned long long)a1;
- (id)windowNibName;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)windowDidFailToEnterFullScreen:(id)a0;
- (void)loadWindow;
- (void)windowWillExitFullScreen:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidLoad;
- (void).cxx_destruct;
- (void)windowDidExitFullScreen:(id)a0;
- (BOOL)window:(id)a0 shouldDragDocumentWithEvent:(id)a1 from:(struct CGPoint { double x0; double x1; })a2 withPasteboard:(id)a3;
- (void)windowDidFailToExitFullScreen:(id)a0;
- (Class)windowClass;
- (void)_prepareWindowPostLoadIsFirstWindow:(BOOL)a0 transitionContext:(id)a1;
- (void)_showWindowPostLoadIsFirstWindow:(BOOL)a0 transitionContext:(id)a1;
- (void)_updateForFullscreen:(BOOL)a0 phase:(long long)a1;
- (void)_windowDidEnterFullScreen;
- (void)_windowDidExitFullScreen;
- (void)_windowWillEnterFullScreen;
- (void)_windowWillExitFullScreen;

@end
