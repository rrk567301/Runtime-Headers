@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (float)brightness;
- (float)contrast;
- (unsigned long long)hash;
- (void)setContrast:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBrightness:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
