@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setBrightness:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContrast:(float)a0;
- (float)brightness;
- (float)contrast;
- (id)init;

@end
