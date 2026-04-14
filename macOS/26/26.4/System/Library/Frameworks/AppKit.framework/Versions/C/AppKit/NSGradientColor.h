@class NSGradient;

@interface NSGradientColor : NSColor {
    NSGradient *_gradient;
    struct CGImage { } *_patternImageRef;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destRect;
    struct CGColor { } *_patternColor;
}

- (id)colorSpaceName;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (struct CGColor { } *)CGColor;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)type;
- (id)description;
- (void)dealloc;
- (id)colorUsingType:(long long)a0;
- (void)_updatePattern;
- (void)_updatePatternImage;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)initWithGradient:(id)a0;

@end
