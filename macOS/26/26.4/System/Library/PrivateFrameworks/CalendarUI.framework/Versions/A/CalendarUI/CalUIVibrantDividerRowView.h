@class NSTableView, NSView;

@interface CalUIVibrantDividerRowView : NSTableRowView

@property (weak) NSTableView *tableView;
@property (retain) NSView *dividerView;

- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setPreviousRowSelected:(BOOL)a0;
- (id)initWithDividerHeight:(double)a0 tableView:(id)a1;
- (void)updateDividerVisibility;

@end
