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
- (void)_setWindowTag;
- (BOOL)canEnterFullScreenMode;
- (BOOL)_allowedInOtherAppsFullScreenSpaceWithCollectionBehavior:(unsigned long long)a0;
- (id)restoreWindowOnDockDeath;
- (BOOL)_wantsFullScreenTileDropTargets;
- (void)_markAppropriateForAutomaticFullScreenMode:(BOOL)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tornFromWindow:(id)a1;
- (void)beginServerSideWindowDragUsingOffset:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldDisableTabBarDropTargets;
- (BOOL)detachAndMoveWindowToSpaceIfNecessary;
- (void)_refreshTilingConstraints:(BOOL)a0;
- (id)detachedWindow;
- (void)enteredMissionControlWithTab;
- (void)mouseUpAfterMissionControl;
- (BOOL)didDetachWindow;

@end
