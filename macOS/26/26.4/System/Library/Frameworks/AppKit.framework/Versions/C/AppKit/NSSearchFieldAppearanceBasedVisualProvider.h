@class NSSearchField, NSSearchFieldCell, NSTextFieldBezelConfiguration, NSString, NSButton;

@interface NSSearchFieldAppearanceBasedVisualProvider : NSTextFieldAppearanceBasedVisualProvider <NSSearchFieldVisualProvider> {
    BOOL _isDVTSearchField;
    NSButton *_cancelButton;
    NSButton *_searchButton;
}

@property (readonly, weak) NSSearchFieldCell *searchFieldCell;
@property (readonly, weak) NSSearchField *searchField;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *searchButton;
@property (readonly) BOOL wantsSeparatedSubviews;
@property (copy) NSTextFieldBezelConfiguration *bezelConfiguration;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) double bezelCellSizeHeightPadding;
@property (readonly) BOOL allowsTextTightening;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)textFieldCellClassForOverrideCheck;
+ (Class)textFieldClassForOverrideCheck;

- (void)layout;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cancelButtonTotalHorizontalOffsetForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textDrawingHandler:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })horizontalInsetsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textBoundsSizeProvider:(id /* block */)a1;
- (id)initWithTextFieldCell:(id)a0;
- (void)removeAllSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)searchButtonTotalHorizontalOffsetForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)searchFieldBezelConfiguration;
- (BOOL)shouldUseSymbolMetrics;

@end
