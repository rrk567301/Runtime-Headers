@interface SCRWorkspaceInjector : NSObject

+ (id)workspace;
+ (void)tearDown;
+ (id)userDefaults;
+ (void)setup;
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
+ (id)cursorAutoHideManager;
+ (BOOL)startedByKeyboardAccessAgent;
+ (void)_setupRelationShipsWithWorkspace:(id)a0 userDefaults:(id)a1 outputManager:(id)a2 mouse:(id)a3 visualsManager:(id)a4 contextualHelpManager:(id)a5 cursorAutoHideManager:(id)a6 gestureManager:(id)a7 rotorManager:(id)a8 observerManager:(id)a9 applicationManager:(id)a10 eventFactory:(id)a11 siriObserver:(id)a12 systemKeyManager:(id)a13 brailleFocusManager:(id)a14 windowManager:(id)a15 shouldRegisterForEventHandlerTargets:(BOOL)a16 shouldRegisterForNotifications:(BOOL)a17 shouldRegisterForSleepWakeNotifications:(BOOL)a18 shouldUpdateConsoleEnabled:(BOOL)a19 shouldObserveFunctionRow:(BOOL)a20 shouldUnmuteAudio:(BOOL)a21 shouldInitializeHotspots:(BOOL)a22 startedByFullKeyboardAccess:(BOOL)a23;
+ (void)_breakRelationShipsWithWorkspace:(id)a0 userDefaults:(id)a1 outputManager:(id)a2 mouse:(id)a3 visualsManager:(id)a4 contextualHelpManager:(id)a5 cursorAutoHideManager:(id)a6 gestureManager:(id)a7 rotorManager:(id)a8 observerManager:(id)a9 applicationManager:(id)a10 eventFactory:(id)a11 siriObserver:(id)a12 systemKeyManager:(id)a13;

@end
