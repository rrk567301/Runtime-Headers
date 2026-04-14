@class NSString;

@interface UnifiedFieldCell : NSTextFieldCell {
    NSString *_accessibilityDescription;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_textAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)unifiedFieldView;

@end
