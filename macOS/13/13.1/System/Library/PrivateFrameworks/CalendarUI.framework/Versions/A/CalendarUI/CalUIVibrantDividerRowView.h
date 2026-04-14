@class NSTableView, NSView;

@interface CalUIVibrantDividerRowView : NSTableRowView

@property (weak) NSTableView *tableView;
@property (retain) NSView *dividerView;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setPreviousRowSelected:(BOOL)a0;
- (id)initWithDividerHeight:(double)a0 tableView:(id)a1;
- (void)updateDividerVisibility;

@end
