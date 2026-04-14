@class NSMenu, NSFileHandle, NSString, NSArray, NSMenuItem, AppleNetworkMenuExtraView, NSOperationQueue, NSBundle, NSMutableArray;

@interface AppleNetworkMenuExtra : NSMenuExtra <NSMenuDelegate> {
    NSBundle *mBundle;
    NSMutableArray *mImages;
    NSArray *mAlternateImages;
    NSMenu *mMenu;
    NSMenuItem *mShowStatusMenuItem;
    NSMenuItem *mShowTimeMenuItem;
    NSMenuItem *mNoConfigsMenuItem;
    struct __SCPreferences { } *mPrefs;
    struct __CFRunLoopSource { } *mRunLoopSource;
    NSFileHandle *mFileHandle;
    AppleNetworkMenuExtraView *mMenuBarView;
    NSArray *mControllers;
    BOOL mProcessingPrefChanges;
    NSOperationQueue *mRefreshQueue;
    NSMutableArray *mUnprocessedSCControllers;
    NSMutableArray *mUnprocessedNEControllers;
    NSArray *mNEControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNetworkExtensionServiceQueue;

- (void)dealloc;
- (void *)copyValueForKey:(id)a0;
- (id)menu;
- (struct __SCPreferences { } *)preferences;
- (id)initWithBundle:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (void)willUnload;
- (id)localizedString:(id)a0;
- (void)storeValue:(void *)a0 forKey:(id)a1;
- (BOOL)convertedForNewUI;
- (id)AXValue;
- (void)loadImages;
- (void)runSelfTest:(unsigned long long)a0 duration:(double)a1;
- (void)createMenu;
- (void)refreshAll;
- (id)getImage:(id)a0;
- (void)loadMenuBarView;
- (void)reloadNetworkExtensionControllers;
- (void)delayedSetup;
- (id)localizedMenuNameString;
- (id)imageNameArray;
- (void)initializeDynamicStoreMonitoring;
- (void)initializeNetworkExtensionChangeQueueMonitoring;
- (void)registerForPrefsFileChangeNotifications;
- (void)refreshForPreferencesChange:(id)a0;
- (void)setProcessingPreferenceChanges:(BOOL)a0;
- (id)keyForShowTimeMenuTitleString;
- (id)keyForShowSpecificTimeMenuTitleString;
- (id)keyForShowStatusMenuTitleString;
- (id)networkPrefSectionName;
- (void)resetPreferences;
- (void)refreshServicesAndControllers;
- (void)reloadSystemConfigurationControllers;
- (void)processControllers;
- (void)releaseMenuItems;
- (void)a_launchThirdPartyVPNApplication:(id)a0;
- (id)timeMenuForServiceControllers:(id)a0;
- (void)a_showTimeInMenuBar:(id)a0;
- (BOOL)boolValueForKey:(id)a0 noValueReturns:(BOOL)a1;
- (void)a_showStatusInMenuBar:(id)a0;
- (id)localizedNoConfigsString;
- (void)noopAction:(id)a0;
- (void)a_launchNetworkPrefs:(id)a0;
- (void)updateMenuWidth;
- (void)a_showSpecificTimeInMenuBar:(id)a0;
- (BOOL)supportsInterfaceType:(id)a0;
- (BOOL)interfaceTypeHasSubtypes:(id)a0;
- (BOOL)supportsInterfaceSubtype:(id)a0;
- (BOOL)isServiceConfigured:(struct __SCNetworkService { } *)a0;
- (id)systemConfigurationRawServices;
- (struct __SCNetworkService { } *)serviceInList:(id)a0 withID:(id)a1;
- (BOOL)supportsNetworkExtension;
- (void)handleDynamicStoreChangedNotification:(id)a0;
- (BOOL)processingPreferenceChanges;

@end
