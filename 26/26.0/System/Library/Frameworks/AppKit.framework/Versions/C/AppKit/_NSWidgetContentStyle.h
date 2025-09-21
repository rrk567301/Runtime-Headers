@interface _NSWidgetContentStyle : NSAppearanceContentStyle {
    long long _styleType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)_backgroundStyleForRenderingIntent:(long long)a0;
- (void)_configureStyleEffectConfiguration:(id)a0 forContentType:(long long)a1 renderingIntent:(long long)a2;
- (id)_equivalentForegroundColorForColor:(id)a0 textStyleName:(id)a1 contentType:(long long)a2;
- (double)_temporaryImageAlphaComponentOverrideWithTemplate:(BOOL)a0;
- (id)compositingFilterForTemplateContentOfType:(long long)a0;
- (id)initWithStyleType:(long long)a0;

@end
