@interface TNPageRepContainer : TSWPPageRep {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _shadowPathRect;
    struct CGPath { } *_shadowPath;
}

- (BOOL)isOpaque;
- (BOOL)masksToBounds;
- (id)accessibilityLabel;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (BOOL)directlyManagesLayerContent;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)shouldBeginScribbleAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
