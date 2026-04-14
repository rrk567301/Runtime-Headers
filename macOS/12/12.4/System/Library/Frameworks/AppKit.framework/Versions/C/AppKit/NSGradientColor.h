@class NSGradient;

@interface NSGradientColor : NSColor {
    NSGradient *_gradient;
    struct CGImage { } *_patternImageRef;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destRect;
    struct CGColor { } *_patternColor;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)set;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorUsingType:(long long)a0;
- (id)colorSpaceName;
- (void)setFill;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)_updatePatternImage;
- (void)_updatePattern;
- (id)initWithGradient:(id)a0;

@end
