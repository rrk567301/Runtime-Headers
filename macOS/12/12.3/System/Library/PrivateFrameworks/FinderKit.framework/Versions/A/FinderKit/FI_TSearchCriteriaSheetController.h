@class NSWindow, NSString, NSArray, NSValue, FI_TTableViewController, NSObject, FI_TTableViewDataSource;
@protocol TSearchCriteriaSheetDelegate;

@interface FI_TSearchCriteriaSheetController : NSWindowController <TMarkTornDown> {
    FI_TTableViewController *_tableViewController;
    FI_TTableViewDataSource *_tableViewDataSource;
    struct TNSWeakPtr<NSObject<TSearchCriteriaSheetDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
    NSWindow *_parentWindow;
    NSArray *_attributeNamesInMenu;
    BOOL _isBackupBrowserWindow;
}

@property (weak, nonatomic) NSObject<TSearchCriteriaSheetDelegate> *delegate;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (void)close;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)showWindow:(id)a0;
- (void)sheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)windowDidLoad;
- (void)cancelButtonPressed:(id)a0;
- (void)aboutToTearDown;
- (void)okButtonPressed:(id)a0;
- (id)initWithParentWindow:(id)a0 attributeNamesInMenu:(id)a1 isBackupBrowserWindow:(BOOL)a2;
- (void)showSheet:(void *)a0;

@end
