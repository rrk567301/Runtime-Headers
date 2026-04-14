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
- (long long)type;
- (void)set;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorSpaceName;
- (id)colorUsingType:(long long)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (void)setFill;
- (id)initWithGradient:(id)a0;
- (void)_updatePatternImage;
- (void)_updatePattern;

@end
