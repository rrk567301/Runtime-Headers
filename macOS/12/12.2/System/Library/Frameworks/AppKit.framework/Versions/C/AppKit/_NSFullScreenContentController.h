@class _NSFullScreenMenuBarCompanionController, _NSFullScreenStorage, NSArray, _NSFullScreenSpace, NSWindow;

@interface _NSFullScreenContentController : NSObject {
    _NSFullScreenMenuBarCompanionController *_menuBarController;
    _NSFullScreenStorage *_fullScreenStorage;
    BOOL _performingLiveResize;
    BOOL _performingTileResizeToFit;
    BOOL _reactingToTileResizeNotification;
    BOOL _hasInvalidTileFrame;
    NSArray *_frozenWids;
}

@property (readonly, nonatomic) NSWindow *window;
@property (retain, nonatomic) _NSFullScreenSpace *space;
@property (nonatomic) unsigned long long presentationOptions;
@property (nonatomic) BOOL hasAlwaysVisibleMenuBar;
@property (weak, nonatomic) _NSFullScreenContentController *surrogateContentController;
@property (weak, nonatomic) _NSFullScreenContentController *realContentController;
@property (nonatomic) BOOL preventsResigningAsPrincipalWindow;
@property (readonly, nonatomic) BOOL reservesSpaceForMenuBarInFullScreen;

+ (unsigned long long)_defaultPresentationOptions;

- (void)dealloc;
- (void).cxx_destruct;
- (id)screen;
- (BOOL)isOnActiveSpace;
- (BOOL)setAsThePrincipalFullScreenWindowInSpace;
- (id)menuBarCompanionController;
- (unsigned int)contentWindowID;
- (void)startLiveResize;
- (void)endLiveResize;
- (void)displayChanged;
- (id)initWithWindow:(id)a0;
- (void)dispose;
- (void)queryCanAddSiblingWindow:(long long)a0 responseHandler:(id /* block */)a1;
- (void)addSiblingWindow:(long long)a0 position:(unsigned long long)a1 responseHandler:(id /* block */)a2;
- (unsigned int)createFencePort;
- (BOOL)maybeAssignWindow:(id)a0;
- (BOOL)isPrincipalInSpace;
- (id)fullScreenStorage;
- (BOOL)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0;
- (BOOL)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0 acceptIncorrectSize:(BOOL)a1;
- (BOOL)sharesTileWithOtherTabs;
- (id)windowIDsForSnapshot;
- (void)thawWindows;
- (void)_gatherWindowsToFreeze:(id)a0 wids:(id)a1;
- (id)windowIDsToFreeze;
- (void)reshapeContentForTileContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentWindowFrame;
- (BOOL)resignPrincipalFullScreenWindowInSpace;
- (unsigned int)contentOwnerConnectionID;
- (void)freezeWindows;
- (BOOL)performDividerDragWithEvent:(id)a0 forResizeDirection:(long long)a1;
- (id)currentDividerResizeDirections;
- (id)cursorForResizeDirection:(long long)a0;
- (BOOL)disableMCExit;

@end
