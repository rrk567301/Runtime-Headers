@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
    OADColor *mForegroundColor;
}

- (void)setForegroundColor:(id)a0;
- (id)foregroundColor;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setStyleColor:(id)a0;

@end
