@interface _NSWidgetContentStyle : NSAppearanceContentStyle {
    long long _styleType;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_configureStyleEffectConfiguration:(id)a0 forContentType:(long long)a1 renderingIntent:(long long)a2;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (double)_temporaryImageAlphaComponentOverrideWithTemplate:(BOOL)a0;
- (id)initWithStyleType:(long long)a0;

@end
