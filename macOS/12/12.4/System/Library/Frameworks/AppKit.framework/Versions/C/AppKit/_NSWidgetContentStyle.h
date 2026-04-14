@interface _NSWidgetContentStyle : NSAppearanceContentStyle {
    long long _styleType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithStyleType:(long long)a0;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (void)_configureStyleEffectConfiguration:(id)a0 forContentType:(long long)a1 renderingIntent:(long long)a2;

@end
