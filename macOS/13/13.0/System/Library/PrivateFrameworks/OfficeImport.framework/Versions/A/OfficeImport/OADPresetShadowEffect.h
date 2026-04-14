@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)presetShadowType;
- (void)setPresetShadowType:(int)a0;
- (id)equivalentOuterShadowEffect;

@end
