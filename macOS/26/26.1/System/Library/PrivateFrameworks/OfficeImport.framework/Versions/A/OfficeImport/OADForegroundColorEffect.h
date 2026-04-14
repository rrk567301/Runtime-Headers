@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
    OADColor *mForegroundColor;
}

- (void)setForegroundColor:(id)a0;
- (unsigned long long)hash;
- (id)foregroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)setStyleColor:(id)a0;

@end
