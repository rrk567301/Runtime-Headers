@interface NSTabPickerWindow : NSWindow

- (struct CGSize { double x0; double x1; })minSize;
- (void)_doFullScreenCleanupForOrderOut;
- (void)_doTabbedWindowSyncToolbar;
- (char)_supportsNewTabButton;
- (id)_tabBarItem;
- (char)canEnterFullScreenMode;
- (void)performClose:(id)a0;
- (void)performCloseTabbedWindowGroup:(id)a0;
- (void)toggleTabOverview:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;

@end
