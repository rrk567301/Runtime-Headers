@interface SCRWorkspaceInjectorScreenReader : SCRWorkspaceInjector

+ (id)userDefaults;
+ (id)eventFactory;
+ (id)mouse;
+ (id)searchManager;
+ (id)observerManager;
+ (id)applicationManager;
+ (id)brailleFocusManager;
+ (id)contextualHelpManager;
+ (id)gestureManager;
+ (id)outputManager;
+ (id)rotorManager;
+ (BOOL)shouldInitializeHotspots;
+ (BOOL)shouldObserveFunctionRow;
+ (BOOL)shouldRegisterForEventHandlerTargets;
+ (BOOL)shouldRegisterForNotifications;
+ (BOOL)shouldRegisterForSleepWakeNotifications;
+ (BOOL)shouldUnmuteAudio;
+ (BOOL)shouldUpdateConsoleEnabled;
+ (id)siriObserver;
+ (id)systemKeyManager;
+ (id)visualsManager;
+ (id)windowManager;

@end
