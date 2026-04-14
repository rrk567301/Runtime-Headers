@class OADStroke, NSString, NSArray, OADFill, OADScene3D, OADShape3D;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned char mHasIsBehindText : 1;
    unsigned char mIsBehindText : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stroke;
- (id)fill;
- (id)effects;
- (void)setEffects:(id)a0;
- (BOOL)hasEffects;
- (void)setFill:(id)a0;
- (void)setParent:(id)a0;
- (id)initWithDefaults;
- (void)setStroke:(id)a0;
- (BOOL)hasStroke;
- (BOOL)hasFill;
- (BOOL)hasExts;
- (BOOL)hasIsBehindText;
- (BOOL)hasNonEmptyFill;
- (id)exts;
- (void)setExts:(id)a0;
- (BOOL)isBehindText;
- (void)setIsBehindText:(BOOL)a0;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;
- (id)scene3D;
- (void)setScene3D:(id)a0;
- (id)shape3D;
- (void)setShape3D:(id)a0;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end
