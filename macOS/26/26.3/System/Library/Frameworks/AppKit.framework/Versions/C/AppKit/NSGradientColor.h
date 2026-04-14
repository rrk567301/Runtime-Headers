@class NSGradient;

@interface NSGradientColor : NSColor {
    NSGradient *_gradient;
    struct CGImage { } *_patternImageRef;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destRect;
    struct CGColor { } *_patternColor;
}

- (void)setStroke;
- (void)set;
- (void)setFill;
- (long long)type;
- (id)colorSpaceName;
- (struct CGColor { } *)CGColor;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)colorUsingType:(long long)a0;
- (void)_updatePattern;
- (void)_updatePatternImage;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)initWithGradient:(id)a0;

@end
