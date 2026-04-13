@class NSWindow, NSMutableArray;
@protocol NSTearOffTabWindowDelegate;

@interface NSTearOffTabWindow : NSWindow {
    NSWindow *_tornFromWindow;
    BOOL _didDetachWindow;
    id _eventMonitor;
    NSMutableArray *_deferredEvents;
}

@property (nonatomic) id<NSTearOffTabWindowDelegate> tabDelegate;

- (void)dealloc;
- (void)enteredMissionControlWithTab;
- (void)mouseUpAfterMissionControl;
- (void)_refreshTilingConstraints:(BOOL)a0;
- (BOOL)canEnterFullScreenMode;
- (void)_setWindowTag;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tornFromWindow:(id)a1;
- (void)beginServerSideWindowDragUsingOffset:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldDisableTabBarDropTargets;
- (BOOL)didDetachWindow;
- (BOOL)detachAndMoveWindowToSpaceIfNecessary;
- (BOOL)_wantsFullScreenTileDropTargets;
- (BOOL)_allowedInOtherAppsFullScreenSpaceWithCollectionBehavior:(unsigned long long)a0;
- (void)_resolveAutomaticEnterFullScreenFlags;
- (id)restoreWindowOnDockDeath;
- (id)detachedWindow;

@end
