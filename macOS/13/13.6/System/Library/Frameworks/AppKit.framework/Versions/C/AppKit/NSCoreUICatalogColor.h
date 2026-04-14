@class CUINamedColor, NSBundle, NSAppearance;

@interface NSCoreUICatalogColor : NSDynamicNamedColor {
    double alphaComponent;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedColorLock;
    NSAppearance *_cachedAppearance;
    struct CGColor { } *_cachedCGColor;
    CUINamedColor *_cachedNamedColorSRGB;
    CUINamedColor *_cachedNamedColorP3;
}

@property (retain) NSBundle *bundle;

+ (id)_bundleFromCatalogName:(id)a0;
+ (id)_catalogNameFromBundle:(id)a0;

- (void)dealloc;
- (Class)classForCoder;
- (struct CGColor { } *)CGColor;
- (long long)_bestMatchingDisplayGamutFor:(id)a0;
- (BOOL)_getSemanticallyEquivalentVisualEffectMaterial:(long long *)a0;
- (double)alphaComponent;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 bundle:(id)a2;
- (id)resolvedColor;

@end
