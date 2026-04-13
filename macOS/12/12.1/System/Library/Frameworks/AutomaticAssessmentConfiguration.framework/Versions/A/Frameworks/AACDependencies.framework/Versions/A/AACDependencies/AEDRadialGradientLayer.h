@class NSArray;

@interface AEDRadialGradientLayer : CALayer {
    NSArray *_colors;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)needsDisplayOnBoundsChange;

@end
