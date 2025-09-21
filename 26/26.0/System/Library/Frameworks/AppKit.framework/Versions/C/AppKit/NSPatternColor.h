@class NSImage;

@interface NSPatternColor : NSColor {
    NSImage *_patternImage;
    struct CGColor { } *_patternColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (struct CGColor { } *)CGColor;
- (id)initWithImage:(id)a0;
- (void)dealloc;
- (Class)classForCoder;
- (void)set;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (void)setStroke;
- (void)setFill;
- (id)description;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)colorSpaceName;
- (id)redactedDescription;
- (id)colorUsingType:(long long)a0;
- (id)_initWithCGPatternColor:(struct CGColor { } *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)patternImage;

@end
