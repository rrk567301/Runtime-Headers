@class Watchdog, NSString, NSMutableDictionary, NSTimer, NSMenu;

@interface DebugUtilities : NSObject <NSMenuDelegate> {
    NSMenu *debugMenu;
    Watchdog *watchdog;
    NSMutableDictionary *stopwatches;
    int numTestsLeftToComplete;
    BOOL memorySamplerIsRunning;
    NSTimer *memorySamplerFinishedTimer;
    BOOL automatedTestRunning;
    NSMenu *_crashWebExtensionBackgroundPagesMenu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDebugUtilities;
+ (void)startLaunchTimeLoggingIfNeeded;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)a0;
- (void)startWatchdog;
- (void)stopWatchdog;
- (id)watchdog;
- (void)createDebugMenu;
- (BOOL)shouldSuppressAlerts;
- (void)stopStopwatchWithIdentifier:(id)a0;
- (double)stopwatchRunTimeWithIdentifier:(id)a0;
- (void)maybeQuitAfterTestCompleted;
- (void)startStopwatchWithIdentifier:(id)a0;
- (void)startMemorySampler:(double)a0;
- (void)startStressTest;
- (void)replaySession:(id)a0;
- (void)stopMemorySampler;
- (void)stopStressTest;
- (BOOL)_alertsAreAutomaticallySuppressed;
- (void)resetAllWebKitInternalFeaturesToDefaultValues:(id)a0;
- (void)toggleMemorySamplerTool:(id)a0;
- (void)toggleStressTest:(id)a0;
- (void)toggleWatchdog:(id)a0;
- (void)toggleSuppressAlerts:(id)a0;
- (id)_drawingAndCompositingFlagsSubmenuItem;
- (id)_mediaFlagsSubmenuItem;
- (id)_debugOverlaysFlagsSubmenuItem;
- (id)_layoutFlagsSubmenuItem;
- (id)_miscellaneousFlagsSubmenuItem;
- (id)_internalDebugFeaturesSubmenuItem;
- (id)_tabOrderManagmentSubmenuItem;
- (id)_searchRelevanceSubmenuItem;
- (id)_trialSubmenuItem;
- (id)_translationSubmenuItem;
- (id)_fluidSafariSubmenuItem;
- (id)_themeColorSubmenuItem;
- (id)_noteTakingSubmenuItem;
- (void)_populateDebugMenu;
- (void)_updateCrashWebExtensionBackgroundPagesMenu;
- (id)_noWebExtensionBackgroundPagesMenuItem;
- (id)_crashWebExtensionBackgroundPageMenuItemForWebExtension:(id)a0 title:(id)a1;
- (void)_crashWebExtensionBackgroundPage:(id)a0;
- (BOOL)validate_toggleStressTest:(id)a0;
- (BOOL)validate_toggleSuppressAlerts:(id)a0;
- (BOOL)validate_toggleWatchdog:(id)a0;
- (BOOL)validate_toggleMemorySamplerTool:(id)a0;
- (BOOL)isAutomatedTestRunning;
- (void)setAutomatedTestRunning:(BOOL)a0;

@end
