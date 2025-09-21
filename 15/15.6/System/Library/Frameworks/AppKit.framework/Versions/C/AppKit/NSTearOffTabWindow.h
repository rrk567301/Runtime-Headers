@class NSWindow, NSMutableArray;
@protocol NSTearOffTabWindowDelegate;

@interface NSTearOffTabWindow : NSWindow {
    NSWindow *_tornFromWindow;
    char _didDetachWindow;
    id _eventMonitor;
    NSMutableArray *_deferredEvents;
}

@property (nonatomic) id<NSTearOffTabWindowDelegate> tabDelegate;

- (void)dealloc;
- (char)_wantsFullScreenTileDropTargets;
- (char)didDetachWindow;
- (char)_allowedInOtherAppsFullScreenSpaceWithCollectionBehavior:(unsigned long long)a0;
- (void)_markAppropriateForAutomaticFullScreenMode:(char)a0;
- (void)_refreshTilingConstraints:(char)a0;
- (void)_setWindowTag;
- (void)beginServerSideWindowDragUsingOffset:(struct CGSize { double x0; double x1; })a0;
- (char)canEnterFullScreenMode;
- (char)detachAndMoveWindowToSpaceIfNecessary;
- (id)detachedWindow;
- (void)enteredMissionControlWithTab;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tornFromWindow:(id)a1;
- (void)mouseUpAfterMissionControl;
- (id)restoreWindowOnDockDeath;
- (char)shouldDisableTabBarDropTargets;

@end
