@class NSTrackingArea, LibraryItem, NSLayoutConstraint;

@interface LibraryTableRowView : NSTableRowView {
    NSTrackingArea *_trackingArea;
    NSLayoutConstraint *_trailingConstraint;
    BOOL _hovered;
}

@property (retain, nonatomic) LibraryItem *item;

- (void)didAddSubview:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)prepareForReuse;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)_libraryTableCellView;
- (BOOL)_needsTrailingMarginForDisclosureButton;
- (void)_updateTrailingConstraintWithDisclosureButtonMargin:(double)a0;
- (id)disclosureButton;
- (id)libraryDisclosureButton;

@end
