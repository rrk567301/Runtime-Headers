@class NSTextField, NSString, NSPanel, NSSearchField, NSArray, NSMutableDictionary, NSPopUpButton, IFXLogDataSource, NSBundle, NSWindow, NSTableView;

@interface IFXLogWindowController : NSWindowController <NSToolbarDelegate, NSTextFieldDelegate> {
    NSWindow *window;
    NSTableView *uiLogView;
    NSPanel *sendLogSheet;
    NSTextField *sendLogCommentTxt;
    NSTextField *sendLogContactTxt;
    NSBundle *_resourcesBundle;
    NSPopUpButton *_logDetailLevelPopUpButton;
    NSSearchField *_filterField;
    NSMutableDictionary *_toolbarItems;
    NSArray *_toolbarIDList;
    id _closeWatcherObj;
    SEL _closeWatcherSel;
    IFXLogDataSource *_logDataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)validateMenuItem:(id)a0;
- (void)saveDocument:(id)a0;
- (void)copy:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (void)toolbarWillAddItem:(id)a0;
- (BOOL)validateToolbarItem:(id)a0;
- (void)showErrorLogs:(id)a0;
- (void)showProgressLogs:(id)a0;
- (void)showAllLogs:(id)a0;
- (void)searchFieldTextChanged:(id)a0;
- (void)printInstallerDocument:(id)a0;
- (void)printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(void *)a2;
- (void)_createAndAddToolbar;
- (id)_toolbarItemList;
- (void)_sendLogViaCrashReporter;
- (BOOL)writeLogToFile:(id)a0;
- (void)_setDefaultLogWindowFrame;
- (id)initWithCloseObserver:(id)a0 selector:(SEL)a1;
- (void)savePanelDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)showLogCommentSheet:(id)a0;

@end
