@class NSArray;

@interface AEDRadialGradientLayer : CALayer {
    NSArray *_colors;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (BOOL)needsDisplayOnBoundsChange;

@end
