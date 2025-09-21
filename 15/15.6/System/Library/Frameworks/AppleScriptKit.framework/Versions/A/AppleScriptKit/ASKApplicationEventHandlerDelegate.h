@interface ASKApplicationEventHandlerDelegate : ASKEventHandlerDelegate

- (char)application:(id)a0 openFile:(id)a1;
- (char)application:(id)a0 openFileWithoutUI:(id)a1;
- (char)application:(id)a0 openTempFile:(id)a1;
- (char)application:(id)a0 printFile:(id)a1;
- (id)applicationDockMenu:(id)a0;
- (char)applicationOpenUntitledFile:(id)a0;
- (char)applicationShouldHandleReopen:(id)a0 hasVisibleWindows:(char)a1;
- (char)applicationShouldOpenUntitledFile:(id)a0;
- (unsigned long long)applicationShouldTerminate:(id)a0;
- (char)applicationShouldTerminateAfterLastWindowClosed:(id)a0;
- (id)nibNameForDocument:(id)a0;

@end
