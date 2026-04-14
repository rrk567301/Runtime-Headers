@interface NSTabPickerWindow : NSWindow

- (struct CGSize { double x0; double x1; })minSize;
- (BOOL)canEnterFullScreenMode;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (BOOL)_supportsNewTabButton;
- (void)toggleTabOverview:(id)a0;
- (void)performClose:(id)a0;
- (void)performCloseTabbedWindowGroup:(id)a0;
- (id)_tabBarItem;
- (void)_doFullScreenCleanupForOrderOut;

@end
