@class OADFill, NSArray;

@interface OADBackgroundProperties : OADBackground {
    OADFill *mFill;
    NSArray *mEffects;
}

- (id)effects;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)fill;
- (void)setEffects:(id)a0;
- (void)setFill:(id)a0;

@end
