@interface NSTabPickerWindow : NSWindow

- (struct CGSize { double x0; double x1; })minSize;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)toggleTabOverview:(id)a0;
- (void)performClose:(id)a0;
- (void)performCloseTabbedWindowGroup:(id)a0;
- (id)_tabBarItem;
- (BOOL)_supportsNewTabButton;
- (BOOL)canEnterFullScreenMode;
- (void)_doFullScreenCleanupForOrderOut;

@end
