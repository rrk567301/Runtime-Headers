@class NSColor;

@interface _NSTintedBezelContentStyle : NSAppearanceContentStyle {
    NSColor *_bezelTintColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (id)initWithBezelTintColor:(id)a0;

@end
