@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)brightness;
- (id)init;
- (void)setContrast:(float)a0;
- (void)setBrightness:(float)a0;
- (float)contrast;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
