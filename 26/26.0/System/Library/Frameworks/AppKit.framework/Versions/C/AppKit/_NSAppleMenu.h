@class NSString, NSMenuItem;

@interface _NSAppleMenu : NSMenu <NSMenuDelegate> {
    NSMenuItem *_locationMenuItem;
    NSMenuItem *_recentsMenuItem;
    long long _recentItemsCount;
    NSString *_logoutFormat;
    NSString *_logoutNowFormat;
    BOOL _isAppleMenuEnabled;
    BOOL _isInstallerMode;
}

@property (class, readonly) _NSAppleMenu *sharedMenu;
@property (class, readonly) BOOL hasSharedMenu;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setAppleMenuEnabled:(BOOL)a0;
+ (void)_setAppleMenuInstallerMode:(BOOL)a0;

- (BOOL)validateMenuItem:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)dealloc;
- (id)title;
- (void).cxx_destruct;
- (id)_createMenuImpl;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (void)_aboutThisMacRequested:(id)a0;
- (void)_addAppleMenuItems;
- (void)_appStoreRequested:(id)a0;
- (id)_appendItemWithTitle:(id)a0 action:(SEL)a1 imageName:(id)a2 tag:(long long)a3 addingTo:(id)a4;
- (id)_appendItemWithTitle:(id)a0 action:(SEL)a1 imageName:(id)a2 tag:(long long)a3 isAlternate:(BOOL)a4 keyEquivalent:(id)a5 keModifier:(unsigned long long)a6 addingTo:(id)a7;
- (id)_appendSectionHeaderWithTitle:(id)a0 addingTo:(id)a1;
- (id)_appendSeparatorTo:(id)a0 withTag:(long long)a1;
- (void)_clearRecentItemsRequested:(id)a0;
- (id)_cocoaImpl;
- (void)_forceQuitPanelRequested:(id)a0;
- (void)_forceQuitRequested:(id)a0;
- (void)_locationRequested:(id)a0;
- (void)_lockScreenRequested:(id)a0;
- (void)_logOutNowRequested:(id)a0;
- (void)_logOutRequested:(id)a0;
- (void)_networkLocationSwitchRequested:(id)a0;
- (void)_networkPreferencesRequested:(id)a0;
- (void)_recentItemRequested:(id)a0;
- (void)_recentsRequested:(id)a0;
- (void)_restartNowRequested:(id)a0;
- (void)_restartRequested:(id)a0;
- (void)_shutDownNowRequested:(id)a0;
- (void)_shutDownRequested:(id)a0;
- (void)_sleepRequested:(id)a0;
- (void)_startupDiskRequested:(id)a0;
- (void)_systemInformationRequested:(id)a0;
- (void)_systemSettingsRequested:(id)a0;
- (void)_updateForManagedPrefs;
- (void)_updateStartupDiskItem;
- (void)_updateVisibility:(BOOL)a0 ofItemWithTag:(long long)a1 isAlternate:(BOOL)a2;
- (BOOL)_useInstallerMode;
- (void)_userNameChanged;
- (BOOL)worksWhenModal;

@end
