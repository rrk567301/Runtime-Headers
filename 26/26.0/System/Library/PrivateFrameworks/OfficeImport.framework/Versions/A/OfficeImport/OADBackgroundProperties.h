@class OADFill, NSArray;

@interface OADBackgroundProperties : OADBackground {
    OADFill *mFill;
    NSArray *mEffects;
}

- (id)effects;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fill;
- (void)setEffects:(id)a0;
- (void)setFill:(id)a0;

@end
