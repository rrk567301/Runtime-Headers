@class NSButton, NSProgressIndicator;

@interface ACUIAccountDataclassCellView : NSTableCellView

@property (retain) NSButton *checkbox;
@property (retain) NSProgressIndicator *spinner;
@property BOOL checkboxChecked;

- (void)setObjectValue:(id)a0;
- (void).cxx_destruct;
- (void)checkboxAction:(id)a0;
- (void)didClickOptionsButton:(id)a0;

@end
