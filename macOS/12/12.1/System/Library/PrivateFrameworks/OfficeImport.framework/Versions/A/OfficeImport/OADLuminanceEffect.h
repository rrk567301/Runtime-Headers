@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)setBrightness:(float)a0;
- (void)setContrast:(float)a0;
- (float)contrast;
- (float)brightness;

@end
