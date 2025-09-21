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
- (char)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (void)saveDocument:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(char)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (void)toolbarWillAddItem:(id)a0;
- (char)validateMenuItem:(id)a0;
- (char)validateToolbarItem:(id)a0;
- (void)windowWillClose:(id)a0;
- (id)initWithCloseObserver:(id)a0 selector:(SEL)a1;
- (char)writeLogToFile:(id)a0;
- (void)_createAndAddToolbar;
- (void)_sendLogViaCrashReporter;
- (void)_setDefaultLogWindowFrame;
- (id)_toolbarItemList;
- (void)printInstallerDocument:(id)a0;
- (void)printOperationDidRun:(id)a0 success:(char)a1 contextInfo:(void *)a2;
- (void)searchFieldTextChanged:(id)a0;
- (void)showAllLogs:(id)a0;
- (void)showErrorLogs:(id)a0;
- (void)showProgressLogs:(id)a0;
- (void)savePanelDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)showLogCommentSheet:(id)a0;

@end
