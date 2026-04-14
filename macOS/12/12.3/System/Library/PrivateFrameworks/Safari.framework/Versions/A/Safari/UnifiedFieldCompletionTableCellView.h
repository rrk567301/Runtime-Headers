@class NSTextField, NSImage, NSLayoutGuide, NSLayoutConstraint;

@interface UnifiedFieldCompletionTableCellView : UnifiedFieldCompletionStyledTableCellView {
    NSTextField *_descriptionTextField;
    NSTextField *_checkmarkTextField;
    NSLayoutGuide *_firstColumnLayoutGuide;
    NSLayoutGuide *_leadingContentLayoutGuide;
    NSLayoutConstraint *_firstColumnLayoutGuideWidthRatioConstraint;
    NSLayoutConstraint *_imageToTitleSpacingConstraint;
    NSLayoutConstraint *_firstColumnLayoutGuideToDescriptionSpacingConstraint;
}

@property (nonatomic) BOOL hasCheckmarkColumn;
@property (nonatomic) BOOL showsCheckmark;
@property (nonatomic) BOOL showsImage;
@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonUnifiedFieldCompletionTableCellViewInit;
- (id)_makeTextField;
- (void)_updateCheckmarkView;
- (BOOL)_shouldAddCheckmarkView;
- (id)_attributedStringForCheckmarkIsSelected:(BOOL)a0;
- (void)configureWithTitle:(id)a0 titleLineBreakMode:(unsigned long long)a1 description:(id)a2 useTwoColumnLayout:(BOOL)a3;
- (void)configureWithTitle:(id)a0 description:(id)a1 useTwoColumnLayout:(BOOL)a2;

@end
