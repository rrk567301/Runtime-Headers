@class NSArray, NSTextField;

@interface MiscFormsDataEditor : SheetWithTableController {
    NSArray *_domains;
    BOOL _ignoreNotifications;
}

@property (weak, nonatomic) NSTextField *emptyTablePlaceholderText;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)hideSheet:(id)a0;
- (void)showSheetInWindow:(id)a0;
- (void)removeAllItems:(id)a0;
- (void)removeSelectedItems:(id)a0;
- (void)_updateVisibilityOfPlaceholderText;
- (void)domainsWithDataChanged:(id)a0;
- (void)resetDomainsWithData;
- (void)startMonitoringFormData;
- (void)stopMonitoringFormData;

@end
