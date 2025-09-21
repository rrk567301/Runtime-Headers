@protocol AMPEpisodeLockupModel;

@interface AMPDesktopUI._ActionCell : NSTableCellView

@property (nonatomic, weak) void /* function */ button;
@property (nonatomic, readonly) id<AMPEpisodeLockupModel> viewModel;
@property (nonatomic) BOOL isRolled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)doActionClicked:(id)a0;

@end
