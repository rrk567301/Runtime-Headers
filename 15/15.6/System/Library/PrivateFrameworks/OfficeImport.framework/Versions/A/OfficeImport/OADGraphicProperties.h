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

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fill;
- (id)stroke;
- (char)hasFill;
- (char)hasStroke;
- (void)setParent:(id)a0;
- (id)effects;
- (void)setEffects:(id)a0;
- (char)hasEffects;
- (void)setFill:(id)a0;
- (id)initWithDefaults;
- (void)setStroke:(id)a0;
- (char)hasIsBehindText;
- (char)hasNonEmptyFill;
- (id)scene3D;
- (char)hasExts;
- (id)shape3D;
- (id)exts;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (char)hasScene3D;
- (char)hasShape3D;
- (char)isBehindText;
- (void)removeUnnecessaryOverrides;
- (void)setExts:(id)a0;
- (void)setIsBehindText:(char)a0;
- (void)setScene3D:(id)a0;
- (void)setShape3D:(id)a0;

@end
