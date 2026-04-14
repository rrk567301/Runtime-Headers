@interface NSTabPickerWindow : NSWindow

- (void)_doFullScreenCleanupForOrderOut;
- (struct CGSize { double x0; double x1; })minSize;
- (void)_doTabbedWindowSyncToolbar;
- (BOOL)_supportsNewTabButton;
- (id)_tabBarItem;
- (BOOL)canEnterFullScreenMode;
- (void)performClose:(id)a0;
- (void)performCloseTabbedWindowGroup:(id)a0;
- (void)toggleTabOverview:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
