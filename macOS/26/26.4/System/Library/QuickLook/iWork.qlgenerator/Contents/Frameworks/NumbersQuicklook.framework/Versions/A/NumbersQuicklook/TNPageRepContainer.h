@interface TNPageRepContainer : TSWPPageRep {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _shadowPathRect;
    struct CGPath { } *_shadowPath;
}

- (BOOL)isOpaque;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (BOOL)masksToBounds;
- (BOOL)directlyManagesLayerContent;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)shouldBeginScribbleAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
