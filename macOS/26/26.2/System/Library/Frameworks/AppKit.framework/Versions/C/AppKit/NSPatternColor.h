@class NSImage;

@interface NSPatternColor : NSColor {
    NSImage *_patternImage;
    struct CGColor { } *_patternColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (id)redactedDescription;
- (void)setFill;
- (id)colorSpaceName;
- (void)set;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (long long)type;
- (id)description;
- (void)dealloc;
- (id)colorUsingType:(long long)a0;
- (id)_initWithCGPatternColor:(struct CGColor { } *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)patternImage;

@end
