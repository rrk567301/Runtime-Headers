@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}

- (float)threshold;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setThreshold:(float)a0;

@end
