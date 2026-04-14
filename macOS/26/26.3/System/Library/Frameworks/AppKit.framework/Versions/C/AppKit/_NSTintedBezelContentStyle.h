@class NSColor;

@interface _NSTintedBezelContentStyle : NSAppearanceContentStyle {
    NSColor *_bezelTintColor;
}

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (id)initWithBezelTintColor:(id)a0;

@end
