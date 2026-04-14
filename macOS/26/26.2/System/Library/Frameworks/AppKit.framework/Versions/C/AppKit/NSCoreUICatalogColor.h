@class CUINamedColor, NSBundle, NSAppearance;

@interface NSCoreUICatalogColor : NSDynamicNamedColor {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedColorLock;
    CUINamedColor *_cachedNamedColor;
    NSAppearance *_cachedAppearance;
    long long _cachedDisplayGamut;
}

@property (retain) NSBundle *bundle;

+ (id)_bundleFromCatalogName:(id)a0;
+ (id)_catalogNameFromBundle:(id)a0;
+ (struct { id x0; id x1; id x2; })_getNamedColorInfoWithCatalogName:(id)a0 colorName:(id)a1 bundle:(id)a2;

- (struct CGColor { } *)CGColor;
- (double)alphaComponent;
- (id)resolvedColor;
- (Class)classForCoder;
- (void)dealloc;
- (BOOL)_getSemanticallyEquivalentVisualEffectMaterial:(long long *)a0;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 bundle:(id)a2;
- (id)resolvedCUINamedColorForAppearance:(id)a0;
- (id)resolvedSystemColorNameForAppearance:(id)a0;

@end
