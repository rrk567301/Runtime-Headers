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
- (void)startStressTest;
- (double)stopwatchRunTimeWithIdentifier:(id)a0;
- (void)toggleWatchdog:(id)a0;
- (BOOL)_alertsAreAutomaticallySuppressed;
- (void)_crashWebExtensionBackgroundPage:(id)a0;
- (id)_crashWebExtensionBackgroundPageMenuItemForWebExtension:(id)a0 title:(id)a1;
- (id)_debugOverlaysFlagsSubmenuItem;
- (id)_drawingAndCompositingFlagsSubmenuItem;
- (id)_fluidSafariSubmenuItem;
- (id)_internalDebugFeaturesSubmenuItem;
- (id)_layoutFlagsSubmenuItem;
- (id)_mediaFlagsSubmenuItem;
- (id)_miscellaneousFlagsSubmenuItem;
- (id)_noWebExtensionBackgroundPagesMenuItem;
- (id)_noteTakingSubmenuItem;
- (void)_populateDebugMenu;
- (id)_searchRelevanceSubmenuItem;
- (id)_tabOrderManagmentSubmenuItem;
- (id)_themeColorSubmenuItem;
- (id)_translationSubmenuItem;
- (id)_trialSubmenuItem;
- (void)_updateCrashWebExtensionBackgroundPagesMenu;
- (BOOL)isAutomatedTestRunning;
- (void)maybeQuitAfterTestCompleted;
- (void)replaySession:(id)a0;
- (void)resetAllWebKitInternalFeaturesToDefaultValues:(id)a0;
- (void)setAutomatedTestRunning:(BOOL)a0;
- (BOOL)shouldSuppressAlerts;
- (void)startMemorySampler:(double)a0;
- (void)startStopwatchWithIdentifier:(id)a0;
- (void)stopMemorySampler;
- (void)stopStopwatchWithIdentifier:(id)a0;
- (void)stopStressTest;
- (void)toggleMemorySamplerTool:(id)a0;
- (void)toggleStressTest:(id)a0;
- (void)toggleSuppressAlerts:(id)a0;
- (BOOL)validate_toggleMemorySamplerTool:(id)a0;
- (BOOL)validate_toggleStressTest:(id)a0;
- (BOOL)validate_toggleSuppressAlerts:(id)a0;
- (BOOL)validate_toggleWatchdog:(id)a0;

@end
