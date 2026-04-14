@class BrowserWindowController, BrowserTabPersistentState;

@interface ClosedTabStateHolder : NSObject

@property (readonly, nonatomic) BrowserWindowController *browserWindowController;
@property (retain, nonatomic) BrowserTabPersistentState *lastClosedTabState;

- (void).cxx_destruct;
- (id)initWithBrowserWindowController:(id)a0;
- (void)_undoCloseTabAtIndex:(unsigned long long)a0 andSelect:(BOOL)a1;
- (void)_closeTabWithoutConfirming:(id)a0;
- (void)clearLastClosedTabState;

@end
