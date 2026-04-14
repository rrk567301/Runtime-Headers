@class _NSFullScreenMenuBarCompanionController, _NSFullScreenStorage, _NSFullScreenSpace, NSWindow;

@interface _NSFullScreenContentController : NSObject {
    _NSFullScreenMenuBarCompanionController *_menuBarController;
    _NSFullScreenStorage *_fullScreenStorage;
    BOOL _performingLiveResize;
    BOOL _performingTileResizeToFit;
    BOOL _reactingToTileResizeNotification;
    BOOL _hasInvalidTileFrame;
}

@property (readonly, nonatomic) NSWindow *window;
@property (retain, nonatomic) _NSFullScreenSpace *space;
@property (nonatomic) unsigned long long presentationOptions;
@property (nonatomic) BOOL hasAlwaysVisibleMenuBar;
@property (weak, nonatomic) _NSFullScreenContentController *surrogateContentController;
@property (weak, nonatomic) _NSFullScreenContentController *realContentController;
@property (nonatomic) BOOL preventsResigningAsPrincipalWindow;

+ (unsigned long long)_defaultPresentationOptions;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (id)screen;
- (void)displayChanged;
- (void)dispose;
- (unsigned int)contentWindowID;
- (BOOL)isOnActiveSpace;
- (id)fullScreenStorage;
- (id)windowIDsForSnapshot;
- (BOOL)visibleMenuBarAllowedInFullScreen;
- (BOOL)reservesSpaceForMenuBarInFullScreen;
- (void)alwaysShowsMenuBarDidChange;
- (unsigned int)createFencePort;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentWindowFrame;
- (BOOL)resignPrincipalFullScreenWindowInSpace;
- (BOOL)setAsThePrincipalFullScreenWindowInSpace;
- (BOOL)isPrincipalInSpace;
- (unsigned int)contentOwnerConnectionID;
- (void)reshapeContentForTileContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)menuBarCompanionController;
- (BOOL)performDividerDragWithEvent:(id)a0 forResizeDirection:(long long)a1;
- (id)currentDividerResizeDirections;
- (id)cursorForResizeDirection:(long long)a0;
- (BOOL)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0;
- (BOOL)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0 acceptIncorrectSize:(BOOL)a1;
- (BOOL)disableMCExit;
- (BOOL)sharesTileWithOtherTabs;
- (void)startLiveResize;
- (void)endLiveResize;
- (void)queryCanAddSiblingWindow:(long long)a0 responseHandler:(id /* block */)a1;
- (void)addSiblingWindow:(long long)a0 position:(unsigned long long)a1 responseHandler:(id /* block */)a2;

@end
