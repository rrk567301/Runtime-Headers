@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (float)brightness;
- (void)setContrast:(float)a0;
- (float)contrast;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setBrightness:(float)a0;
- (unsigned long long)hash;

@end
