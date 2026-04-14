@interface AMPDesktopUI._ArtistActionCell : AMPRolloverTableCell

@property (nonatomic, weak) void /* function */ button;
@property (nonatomic) BOOL rollover;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)reflectArtistAction:(id)a0;

@end
