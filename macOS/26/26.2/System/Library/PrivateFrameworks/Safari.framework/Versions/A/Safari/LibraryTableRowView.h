@class NSTrackingArea, LibraryItem, NSLayoutConstraint;

@interface LibraryTableRowView : NSTableRowView {
    NSTrackingArea *_trackingArea;
    NSLayoutConstraint *_trailingConstraint;
    BOOL _hovered;
}

@property (retain, nonatomic) LibraryItem *item;

- (void)mouseEntered:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)mouseExited:(id)a0;
- (void)didAddSubview:(id)a0;
- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (void)prepareForReuse;
- (id)_libraryTableCellView;
- (BOOL)_needsTrailingMarginForDisclosureButton;
- (void)_updateTrailingConstraintWithDisclosureButtonMargin:(double)a0;
- (id)disclosureButton;
- (id)libraryDisclosureButton;

@end
