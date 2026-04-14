@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
    OADColor *mForegroundColor;
}

- (id)foregroundColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setForegroundColor:(id)a0;
- (void).cxx_destruct;
- (void)setStyleColor:(id)a0;

@end
