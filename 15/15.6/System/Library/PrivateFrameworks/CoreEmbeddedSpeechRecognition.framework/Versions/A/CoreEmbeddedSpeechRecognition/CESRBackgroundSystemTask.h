@interface CESRBackgroundSystemTask : NSObject

- (char)_isANECapableDevice;
- (char)_isPeriodicPreheatEnabled;
- (void)registerAndSubmitBGSystemTasks;

@end
