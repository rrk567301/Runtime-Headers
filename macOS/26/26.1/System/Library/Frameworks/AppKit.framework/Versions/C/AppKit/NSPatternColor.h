@class NSImage;

@interface NSPatternColor : NSColor {
    NSImage *_patternImage;
    struct CGColor { } *_patternColor;
}

+ (id)newWithCoder:(id)a0 zone:(struct _NSZone { } *)a1;

- (id)initWithImage:(id)a0;
- (void)setFill;
- (long long)type;
- (unsigned long long)hash;
- (id)colorSpaceName;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CGColor { } *)CGColor;
- (void)dealloc;
- (void)set;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (void)setStroke;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)colorUsingType:(long long)a0;
- (id)_initWithCGPatternColor:(struct CGColor { } *)a0;
- (id)colorUsingColorSpaceName:(id)a0 device:(id)a1;
- (id)patternImage;

@end
