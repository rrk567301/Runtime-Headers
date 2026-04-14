@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)equivalentOuterShadowEffect;
- (int)presetShadowType;
- (void)setPresetShadowType:(int)a0;

@end
