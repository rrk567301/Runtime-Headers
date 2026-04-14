@class NSTrackingArea, LibraryItem, NSLayoutConstraint;

@interface LibraryTableRowView : NSTableRowView {
    NSTrackingArea *_trackingArea;
    NSLayoutConstraint *_trailingConstraint;
    BOOL _hovered;
}

@property (retain, nonatomic) LibraryItem *item;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)didAddSubview:(id)a0;
- (void)_commonLibraryTableRowViewInit;
- (id)libraryDisclosureButton;
- (id)disclosureButton;
- (BOOL)_needsTrailingMarginForDisclosureButton;
- (void)_updateTrailingConstraint;
- (id)_libraryTableCellView;

@end
