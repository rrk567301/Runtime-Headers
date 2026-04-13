@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)setPresetShadowType:(int)a0;
- (int)presetShadowType;
- (id)equivalentOuterShadowEffect;

@end
