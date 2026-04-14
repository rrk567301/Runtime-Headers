@class OADFill, NSArray;

@interface OADBackgroundProperties : OADBackground {
    OADFill *mFill;
    NSArray *mEffects;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)fill;
- (id)effects;
- (void)setEffects:(id)a0;
- (void)setFill:(id)a0;

@end
