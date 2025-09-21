@interface CBPairedDeviceSelectorController : CBDeviceSelectorController

+ (id)pairingController;

- (void)windowDidLoad;
- (int)runModal;
- (id)getResults;

@end
