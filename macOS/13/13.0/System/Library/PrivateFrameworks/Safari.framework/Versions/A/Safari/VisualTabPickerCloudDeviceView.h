@class NSString, NSTableView, NSTextField;
@protocol VisualTabPickerCloudDeviceViewDelegate, VisualTabPickerCloudDeviceViewDataSource;

@interface VisualTabPickerCloudDeviceView : NSView <NSTableViewDataSource, NSTableViewDelegate, RolloverActionButtonTableCellViewDelegate, AccessibleRolloverActionButtonTableCellViewDelegate> {
    NSTextField *_deviceNameTextField;
    NSTableView *_tableView;
}

@property (weak, nonatomic) id<VisualTabPickerCloudDeviceViewDataSource> dataSource;
@property (weak, nonatomic) id<VisualTabPickerCloudDeviceViewDelegate> delegate;
@property (nonatomic) BOOL closeRequestSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 rowActionsForRow:(long long)a1 edge:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)_reloadData;
- (id)accessibilityGetDescriptionForAccessibleRolloverActionButtonTableCellView:(id)a0;
- (void)accessibilityPerformPressActionForAccessibleRolloverActionButtonTableCellView:(id)a0;
- (void)actionButtonClickedInTableCellView:(id)a0;
- (void)_createTableView;
- (void)_activateTableCellRow:(unsigned long long)a0;
- (void)_updateTableAccessibilityLabel;
- (unsigned long long)_cloudTabIndexForRowIndex:(unsigned long long)a0;
- (id)_createTabTitleField;
- (BOOL)_isHeaderRow:(long long)a0;

@end
