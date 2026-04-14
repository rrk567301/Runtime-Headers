@class NSColor;

@interface _NSTintedBezelContentStyle : NSAppearanceContentStyle {
    NSColor *_bezelTintColor;
}

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (id)initWithBezelTintColor:(id)a0;

@end
