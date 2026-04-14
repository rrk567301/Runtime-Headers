@interface CBDeviceServiceBrowserController : CBDeviceSelectorController

+ (id)serviceBrowserController;

- (void)windowDidLoad;
- (int)runModal;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (id)getResults;

@end
