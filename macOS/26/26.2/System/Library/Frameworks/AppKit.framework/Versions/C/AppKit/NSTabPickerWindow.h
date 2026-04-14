@interface NSTabPickerWindow : NSWindow

- (BOOL)validateUserInterfaceItem:(id)a0;
- (struct CGSize { double x0; double x1; })minSize;
- (void)_doFullScreenCleanupForOrderOut;
- (void)_doTabbedWindowSyncToolbar;
- (BOOL)_supportsNewTabButton;
- (id)_tabBarItem;
- (BOOL)canEnterFullScreenMode;
- (void)performClose:(id)a0;
- (void)performCloseTabbedWindowGroup:(id)a0;
- (void)toggleTabOverview:(id)a0;

@end
