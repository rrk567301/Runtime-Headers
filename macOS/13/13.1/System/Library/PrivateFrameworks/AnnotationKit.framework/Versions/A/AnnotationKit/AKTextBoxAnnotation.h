@class NSColor;

@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation {
    NSColor *_highlightColor;
}

+ (BOOL)deleteAfterEditingIfEmpty;
+ (id)defaultPlaceholderText;

- (id)init;
- (void).cxx_destruct;
- (id)displayName;
- (id)highlightColor;
- (void)setHighlightColor:(id)a0;
- (id)keysForValuesToObserveForRedrawing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;

@end
