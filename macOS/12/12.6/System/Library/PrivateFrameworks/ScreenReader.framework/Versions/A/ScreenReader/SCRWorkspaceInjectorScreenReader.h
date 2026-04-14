@interface SCRWorkspaceInjectorScreenReader : SCRWorkspaceInjector

+ (id)userDefaults;
+ (id)eventFactory;
+ (id)mouse;
+ (id)applicationManager;
+ (id)outputManager;
+ (id)visualsManager;
+ (id)rotorManager;
+ (id)observerManager;
+ (id)windowManager;
+ (id)contextualHelpManager;
+ (id)brailleFocusManager;
+ (id)gestureManager;
+ (id)siriObserver;
+ (id)systemKeyManager;
+ (BOOL)shouldRegisterForEventHandlerTargets;
+ (BOOL)shouldRegisterForNotifications;
+ (BOOL)shouldRegisterForSleepWakeNotifications;
+ (BOOL)shouldUpdateConsoleEnabled;
+ (BOOL)shouldObserveFunctionRow;
+ (BOOL)shouldUnmuteAudio;
+ (BOOL)shouldInitializeHotspots;

@end
