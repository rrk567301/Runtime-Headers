@class _NSFullScreenMenuBarCompanionController, _NSFullScreenStorage, _NSFullScreenSpace, NSWindow;

@interface _NSFullScreenContentController : NSObject {
    _NSFullScreenMenuBarCompanionController *_menuBarController;
    _NSFullScreenStorage *_fullScreenStorage;
    char _performingLiveResize;
    char _performingTileResizeToFit;
    char _hasInvalidTileFrame;
}

@property (readonly, nonatomic) NSWindow *window;
@property (retain, nonatomic) _NSFullScreenSpace *space;
@property (nonatomic) unsigned long long presentationOptions;
@property (nonatomic) char hasAlwaysVisibleMenuBar;
@property (weak, nonatomic) _NSFullScreenContentController *surrogateContentController;
@property (weak, nonatomic) _NSFullScreenContentController *realContentController;
@property (nonatomic) char preventsResigningAsPrincipalWindow;
@property (nonatomic) struct CGSize { double width; double height; } fallbackMinFullScreenContentSize;
@property (readonly) char visibleMenuBarAllowedInFullScreen;
@property (readonly) char allowsCompanionWindowRevealInFullScreen;
@property (readonly) char reservesSpaceForMenuBarInFullScreen;

+ (unsigned long long)_defaultPresentationOptions;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)createFencePort;
- (void)dispose;
- (id)initWithWindow:(id)a0;
- (void)startLiveResize;
- (unsigned int)contentWindowID;
- (char)isOnActiveSpace;
- (void)addSiblingWindow:(long long)a0 position:(unsigned long long)a1 responseHandler:(id /* block */)a2;
- (void)alwaysShowsMenuBarDidChange;
- (unsigned int)contentOwnerConnectionID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentWindowFrame;
- (id)currentDividerResizeDirections;
- (id)cursorForResizeDirection:(long long)a0;
- (char)disableMCExit;
- (void)displayChanged;
- (void)endLiveResize;
- (id)fullScreenStorage;
- (char)isPrincipalInSpace;
- (id)menuBarCompanionController;
- (char)performDividerDragWithEvent:(id)a0 forResizeDirection:(long long)a1;
- (char)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0;
- (char)performTileResizeToFit:(struct CGSize { double x0; double x1; })a0 acceptIncorrectSize:(char)a1;
- (void)queryCanAddSiblingWindow:(long long)a0 responseHandler:(id /* block */)a1;
- (void)reshapeContentForTileContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (char)resignPrincipalFullScreenWindowInSpace;
- (id)screen;
- (char)setAsThePrincipalFullScreenWindowInSpace;
- (char)sharesTileWithOtherTabs;
- (id)windowIDsForSnapshot;

@end
