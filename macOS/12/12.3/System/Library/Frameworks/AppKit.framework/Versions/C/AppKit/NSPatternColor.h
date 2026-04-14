@class NSImage;

@interface NSPatternColor : NSColor {
    NSImage *_patternImage;
    struct CGColor { } *cachedPatternColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)set;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (struct CGColor { } *)CGColor;
- (void)setStroke;
- (id)colorUsingType:(long long)a0;
- (id)colorSpaceName;
- (void)setFill;
- (id)patternImage;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (id)initWithImage:(id)a0;
- (id)_initWithCGPatternColor:(struct CGColor { } *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;

@end
