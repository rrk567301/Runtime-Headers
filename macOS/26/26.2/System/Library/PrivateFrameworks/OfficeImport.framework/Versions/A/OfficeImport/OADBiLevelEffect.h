@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}

- (float)threshold;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setThreshold:(float)a0;
- (id)init;

@end
