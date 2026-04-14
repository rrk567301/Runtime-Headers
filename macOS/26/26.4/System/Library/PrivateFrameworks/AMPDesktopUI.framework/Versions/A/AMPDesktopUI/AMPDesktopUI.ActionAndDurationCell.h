@interface AMPDesktopUI.ActionAndDurationCell : AMPRolloverTableCell

@property (nonatomic, weak) void /* function */ label;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)doActionMenu:(id)a0;

@end
