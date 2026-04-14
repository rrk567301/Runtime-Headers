@class NSWindow;

@interface _NSFullScreenToolbarSurrogateWindow : NSWindow {
    NSWindow *_realWindow;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)canEnterFullScreenMode;
- (void)performClose:(id)a0;
- (void)becomeKeyWindow;
- (void)toggleFullScreen:(id)a0;
- (void)becomeMainWindow;
- (void)addChildWindow:(id)a0 ordered:(long long)a1;
- (void)removeChildWindow:(id)a0;
- (void)_close:(id)a0;
- (void)_startWindowDragWithEvent:(id)a0 options:(unsigned long long)a1 animate:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)realWindowExitedFullScreenNotification:(id)a0;
- (void)realWindowKeyChangedNotification:(id)a0;
- (BOOL)hasKeyAppearanceIncludingSheets:(BOOL)a0;
- (id)initSurrogateForWindow:(id)a0;

@end
