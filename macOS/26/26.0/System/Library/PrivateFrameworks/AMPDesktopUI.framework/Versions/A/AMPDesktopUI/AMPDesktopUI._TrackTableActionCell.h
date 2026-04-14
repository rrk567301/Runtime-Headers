@protocol AMPTrackTableItemModel;

@interface AMPDesktopUI._TrackTableActionCell : AMPRolloverTableCell {
    void /* unknown type, empty encoding */ owner;
    void /* unknown type, empty encoding */ kLeadingPadding;
    void /* unknown type, empty encoding */ kTrailingPadding;
}

@property (nonatomic, weak) void /* function */ button;
@property (nonatomic, readonly) id<AMPTrackTableItemModel> viewModel;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic) BOOL rollover;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)doActionClicked:(id)a0;

@end
