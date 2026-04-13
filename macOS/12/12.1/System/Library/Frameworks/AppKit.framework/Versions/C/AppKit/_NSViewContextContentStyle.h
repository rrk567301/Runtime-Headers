@interface _NSViewContextContentStyle : NSAppearanceContentStyle {
    long long _backgroundStyle;
    long long _semanticContext;
    unsigned long long _windowStyleMask;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithBackgroundStyle:(long long)a0 semanticContext:(long long)a1 windowStyleMask:(unsigned long long)a2;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;

@end
