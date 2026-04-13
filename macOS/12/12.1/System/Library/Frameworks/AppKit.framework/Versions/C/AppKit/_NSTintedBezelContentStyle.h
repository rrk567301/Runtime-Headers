@class NSColor;

@interface _NSTintedBezelContentStyle : NSAppearanceContentStyle {
    NSColor *_bezelTintColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithBezelTintColor:(id)a0;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;

@end
