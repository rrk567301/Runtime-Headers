@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (float)threshold;
- (void)setThreshold:(float)a0;

@end
