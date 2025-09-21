@interface SCRBootPickerApplication : SCRApplication

@property (nonatomic) char _didForceInitialFocus;

- (void)_initialFocusOntoApplicationIfNeeded;
- (void)applicationDidInitialize;
- (void)elementWasCreated:(id)a0;

@end
