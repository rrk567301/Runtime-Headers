@interface SCRWorkspaceInjectorScreenReader : SCRWorkspaceInjector

+ (id)userDefaults;
+ (id)eventFactory;
+ (id)mouse;
+ (id)searchManager;
+ (id)outputManager;
+ (id)visualsManager;
+ (id)contextualHelpManager;
+ (id)gestureManager;
+ (id)rotorManager;
+ (id)observerManager;
+ (id)applicationManager;
+ (id)brailleFocusManager;
+ (id)siriObserver;
+ (id)systemKeyManager;
+ (id)windowManager;
+ (BOOL)shouldRegisterForEventHandlerTargets;
+ (BOOL)shouldRegisterForNotifications;
+ (BOOL)shouldRegisterForSleepWakeNotifications;
+ (BOOL)shouldUpdateConsoleEnabled;
+ (BOOL)shouldObserveFunctionRow;
+ (BOOL)shouldUnmuteAudio;
+ (BOOL)shouldInitializeHotspots;

@end
