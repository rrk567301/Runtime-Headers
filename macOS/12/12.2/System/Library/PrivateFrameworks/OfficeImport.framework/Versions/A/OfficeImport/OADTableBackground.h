@class NSString, OADFill, NSArray;

@interface OADTableBackground : NSObject <OADEffectsParent> {
    OADFill *mFill;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fill;
- (BOOL)hasEffects;
- (void)setFill:(id)a0;
- (void)setEffects:(id)a0;
- (id)effects;

@end
