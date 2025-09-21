@class Watchdog, NSString, NSMutableDictionary, NSTimer, NSMenu, NSMenuItem;
@protocol WBSPageTestDelegate;

@interface DebugUtilities : NSObject <NSMenuDelegate> {
    NSMenu *debugMenu;
    Watchdog *watchdog;
    NSMutableDictionary *stopwatches;
    int numTestsLeftToComplete;
    char memorySamplerIsRunning;
    NSTimer *memorySamplerFinishedTimer;
    char automatedTestRunning;
    NSMenu *_fastSyncStateMenu;
    NSMenuItem *_fastSyncStateIsLoadingMenuItem;
    long long _sandboxExtensionForTesting;
    id<WBSPageTestDelegate> _pageTestDelegate;
}

@property (class, readonly, nonatomic) char enableDebugUtilities;

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
- (id)watchdog;
- (void)startWatchdog;
- (void)stopWatchdog;
- (void)createDebugMenu;
- (void)runReaderTests:(id)a0;
- (void)startStressTest;
- (void)toggleWatchdog:(id)a0;
- (double)stopwatchRunTimeWithIdentifier:(id)a0;
- (char)_alertsAreAutomaticallySuppressed;
- (id)_debugOverlaysFlagsSubmenuItem;
- (id)_drawingAndCompositingFlagsSubmenuItem;
- (void)_fastSyncStateMenuNeedsUpdate:(id)a0;
- (id)_internalDebugFeaturesSubmenuItem;
- (id)_layoutFlagsSubmenuItem;
- (id)_mediaFlagsSubmenuItem;
- (id)_miscellaneousFlagsSubmenuItem;
- (id)_noteTakingSubmenuItem;
- (void)_parseArgumentsForTestingIfNeeded:(id)a0 atIndex:(unsigned long long)a1;
- (void)_performBlockAfterApplicationHasFinishLaunching:(id /* block */)a0;
- (void)_populateDebugMenu;
- (id)_searchRelevanceSubmenuItem;
- (id)_tabOrderManagmentSubmenuItem;
- (id)_themeColorSubmenuItem;
- (id)_translationSubmenuItem;
- (id)_trialSubmenuItem;
- (char)isAutomatedTestRunning;
- (void)maybeQuitAfterTestCompleted;
- (void)replaySession:(id)a0;
- (void)resetAllWebKitInternalFeaturesToDefaultValues:(id)a0;
- (void)runAutoFillFillingTests:(id)a0;
- (void)runAutoFillTests:(id)a0;
- (void)runBulkClassificationTests:(id)a0;
- (void)runPageTests:(id)a0 withController:(void *)a1;
- (void)setAutomatedTestRunning:(char)a0;
- (char)shouldSuppressAlerts;
- (void)startMemorySampler:(double)a0;
- (void)startStopwatchWithIdentifier:(id)a0;
- (void)stopMemorySampler;
- (void)stopStopwatchWithIdentifier:(id)a0;
- (void)stopStressTest;
- (void)toggleMemorySamplerTool:(id)a0;
- (void)toggleStressTest:(id)a0;
- (void)toggleSuppressAlerts:(id)a0;
- (char)validate_toggleMemorySamplerTool:(id)a0;
- (char)validate_toggleStressTest:(id)a0;
- (char)validate_toggleSuppressAlerts:(id)a0;
- (char)validate_toggleWatchdog:(id)a0;

@end
