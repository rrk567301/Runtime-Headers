@class NSString, WebAppDocumentController, NSMenu, NSMenuItem;

@interface WebAppController : NSObject <NSMenuDelegate, NSApplicationDelegate> {
    WebAppDocumentController *_webAppDocumentController;
}

@property (weak) NSMenu *fileMenu;
@property (weak) NSMenu *viewMenu;
@property (weak) NSMenuItem *applicationMenuItem;
@property (weak) NSMenuItem *aboutMenuItem;
@property (weak) NSMenuItem *hideMenuItem;
@property (weak) NSMenuItem *quitMenuItem;
@property (weak) NSMenuItem *shareMenuItem;
@property (weak) NSMenuItem *reloadMenuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)applicationWillFinishLaunching:(id)a0;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (void)application:(id)a0 openURLs:(id)a1;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)applicationWillBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)_updateTemplateBundleIfNeeded;
- (void)backForwardButtonClicked:(id)a0;
- (void)manifestDidChange;
- (void)orderFrontTemplateAboutPanel:(id)a0;
- (void)showKeyboardShortcuts:(id)a0;
- (void)showPreferences:(id)a0;
- (void)showSharingServicePicker:(id)a0;
- (void)toggleStatusBar:(id)a0;
- (void)updateMenuBar;

@end
