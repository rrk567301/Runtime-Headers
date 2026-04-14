@interface SCRWorkspaceInjector : NSObject

+ (id)workspace;
+ (void)tearDown;
+ (id)userDefaults;
+ (void)setup;
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
+ (id)cursorAutoHideManager;
+ (BOOL)startedByKeyboardAccessAgent;
+ (void)_setupRelationShipsWithWorkspace:(id)a0 userDefaults:(id)a1 outputManager:(id)a2 mouse:(id)a3 visualsManager:(id)a4 contextualHelpManager:(id)a5 cursorAutoHideManager:(id)a6 gestureManager:(id)a7 rotorManager:(id)a8 observerManager:(id)a9 applicationManager:(id)a10 eventFactory:(id)a11 siriObserver:(id)a12 systemKeyManager:(id)a13 brailleFocusManager:(id)a14 windowManager:(id)a15 searchManager:(id)a16 shouldRegisterForEventHandlerTargets:(BOOL)a17 shouldRegisterForNotifications:(BOOL)a18 shouldRegisterForSleepWakeNotifications:(BOOL)a19 shouldUpdateConsoleEnabled:(BOOL)a20 shouldObserveFunctionRow:(BOOL)a21 shouldUnmuteAudio:(BOOL)a22 shouldInitializeHotspots:(BOOL)a23 startedByFullKeyboardAccess:(BOOL)a24;
+ (void)_breakRelationShipsWithWorkspace:(id)a0 userDefaults:(id)a1 outputManager:(id)a2 mouse:(id)a3 visualsManager:(id)a4 contextualHelpManager:(id)a5 cursorAutoHideManager:(id)a6 gestureManager:(id)a7 rotorManager:(id)a8 observerManager:(id)a9 applicationManager:(id)a10 eventFactory:(id)a11 siriObserver:(id)a12 systemKeyManager:(id)a13 windowManager:(id)a14 searchManager:(id)a15;

@end
