@class NSDictionary, CUIShapeEffectPreset, CUIImage;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}

- (void)dealloc;
- (id)effectPreset;
- (id)initWithCoreUIOptions:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (void)_initializeCoreUIOptions:(id)a0;
- (id)_rendererInitializationDictionary;
- (id)referenceImage;
- (id)coreUIOptions;
- (BOOL)_generateReferenceImage;

@end
