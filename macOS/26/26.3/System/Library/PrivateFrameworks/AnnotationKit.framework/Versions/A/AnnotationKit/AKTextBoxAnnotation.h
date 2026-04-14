@class NSColor;

@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation {
    NSColor *_highlightColor;
}

+ (id)defaultPlaceholderText;
+ (BOOL)deleteAfterEditingIfEmpty;

- (id)highlightColor;
- (void)setHighlightColor:(id)a0;
- (id)displayName;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;

@end
