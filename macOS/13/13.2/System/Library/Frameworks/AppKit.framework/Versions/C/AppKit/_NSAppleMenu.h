@class NSString, NSMenuItem;

@interface _NSAppleMenu : NSMenu <NSMenuDelegate> {
    NSMenuItem *_locationMenuItem;
    NSMenuItem *_recentsMenuItem;
    BOOL _isRecentsEnabled;
}

@property (class, weak, nonatomic) _NSAppleMenu *sharedMenu;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setAppleMenuEnabled:(BOOL)a0;
+ (void)_setAppleMenuInstallerMode:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)menuDidClose:(id)a0;
- (void)_enableItem:(id)a0;
- (id)_createMenuImpl;
- (void)_aboutThisMacRequested:(id)a0;
- (void)_systemInformationRequested:(id)a0;
- (void)_systemPreferencesRequested:(id)a0;
- (void)_locationRequested:(id)a0;
- (void)_appStoreRequested:(id)a0;
- (void)_recentItemsRequested:(id)a0;
- (void)_forceQuitPanelRequested:(id)a0;
- (void)_forceQuitRequested:(id)a0;
- (void)_sleepRequested:(id)a0;
- (void)_restartRequested:(id)a0;
- (void)_restartNowRequested:(id)a0;
- (void)_shutDownRequested:(id)a0;
- (void)_shutDownNowRequested:(id)a0;
- (void)_lockScreenRequested:(id)a0;
- (void)_logOutRequested:(id)a0;
- (void)_logOutNowRequested:(id)a0;
- (void)_clearRecentItemsRequested:(id)a0;
- (void)_networkPreferencesRequested:(id)a0;
- (void)_networkLocationSwitchRequested:(id)a0;
- (void)_updateStartupDiskItem:(id)a0;
- (id)_cocoaImpl;
- (id)_appendSectionHeaderWithTitle:(id)a0 addingTo:(id)a1;
- (id)_appendItemWithTitle:(id)a0 action:(SEL)a1 tag:(long long)a2 addingTo:(id)a3;
- (id)_appendItemWithTitle:(id)a0 action:(SEL)a1 tag:(long long)a2 isAlternate:(BOOL)a3 keyEquivalent:(id)a4 keModifier:(unsigned long long)a5 addingTo:(id)a6;
- (id)_appendSeparatorTo:(id)a0 withTag:(long long)a1;
- (BOOL)_useInstallerMode;
- (void)_recentItemRequested:(id)a0;

@end
