@class NSImage;

@interface NSPatternColor : NSColor {
    NSImage *_patternImage;
    struct CGColor { } *_patternColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)initWithImage:(id)a0;
- (void)setStroke;
- (void)set;
- (void)setFill;
- (long long)type;
- (id)colorSpaceName;
- (struct CGColor { } *)CGColor;
- (id)description;
- (Class)classForCoder;
- (id)redactedDescription;
- (void)dealloc;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)colorUsingType:(long long)a0;
- (id)_initWithCGPatternColor:(struct CGColor { } *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)patternImage;

@end
