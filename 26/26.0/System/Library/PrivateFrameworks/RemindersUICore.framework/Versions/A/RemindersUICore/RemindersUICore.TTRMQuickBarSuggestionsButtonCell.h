@interface RemindersUICore.TTRMQuickBarSuggestionsButtonCell : NSButtonCell {
    void /* unknown type, empty encoding */ foregroundColor;
    void /* unknown type, empty encoding */ trailingImage;
    void /* unknown type, empty encoding */ trailingStrokeSpacing;
    void /* unknown type, empty encoding */ trailingStrokeWidth;
    void /* unknown type, empty encoding */ trailingStrokeHeight;
    void /* unknown type, empty encoding */ trailingImageSize;
    void /* unknown type, empty encoding */ leadingImageSize;
    void /* unknown type, empty encoding */ padding;
    void /* unknown type, empty encoding */ existingBezel;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;

@end
