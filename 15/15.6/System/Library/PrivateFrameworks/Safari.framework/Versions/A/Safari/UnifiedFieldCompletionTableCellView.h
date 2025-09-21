@class NSTextField, NSImageView, NSImage, NSTrackingArea, NSLayoutGuide, NSLayoutConstraint, NSButton;

@interface UnifiedFieldCompletionTableCellView : UnifiedFieldCompletionStyledTableCellView {
    NSTextField *_descriptionTextField;
    NSTextField *_checkmarkTextField;
    NSLayoutGuide *_firstColumnLayoutGuide;
    NSLayoutGuide *_leadingContentLayoutGuide;
    NSLayoutConstraint *_firstColumnLayoutGuideWidthRatioConstraint;
    NSLayoutConstraint *_imageToTitleSpacingConstraint;
    NSLayoutConstraint *_firstColumnLayoutGuideToDescriptionSpacingConstraint;
    char _mouseOver;
    NSButton *_deleteButton;
    NSTrackingArea *_trackingArea;
    NSImageView *_trailingImageView;
}

@property (nonatomic) char hasCheckmarkColumn;
@property (nonatomic) char showsCheckmark;
@property (nonatomic) char showsImage;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *trailingImage;
@property (copy, nonatomic) id /* block */ deleteAction;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (char)isAccessibilityEnabled;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (id)_attributedStringForCheckmarkIsSelected:(char)a0;
- (void)_commonUnifiedFieldCompletionTableCellViewInit;
- (void)_deleteRow:(id)a0;
- (id)_makeTextField;
- (char)_shouldAddCheckmarkView;
- (void)_updateCheckmarkView;
- (void)_updateDeleteButtonVisibility;
- (void)configureWithTitle:(id)a0 description:(id)a1 useTwoColumnLayout:(char)a2;
- (void)configureWithTitle:(id)a0 highlightedRanges:(id)a1 titleLineBreakMode:(unsigned long long)a2 description:(id)a3 useTwoColumnLayout:(char)a4;

@end
