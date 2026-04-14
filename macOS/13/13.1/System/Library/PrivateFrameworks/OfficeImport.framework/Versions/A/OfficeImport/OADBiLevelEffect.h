@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)threshold;
- (void)setThreshold:(float)a0;

@end
