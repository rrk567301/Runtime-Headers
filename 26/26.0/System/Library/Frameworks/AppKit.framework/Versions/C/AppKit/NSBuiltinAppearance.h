@class NSString, NSBundle;

@interface NSBuiltinAppearance : NSAppearance {
    NSBundle *_systemAppearanceBundle;
    NSString *_publicName;
    NSString *_catalystName;
}

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)_appearanceDisablingSolarium;
- (id)_appearancePreferringSolarium;
- (id)_bundleResourceName;
- (id)_catalystName;
- (BOOL)_isBuiltinAppearance;
- (id)appearanceByApplyingTintColor:(id)a0;
- (id)initWithBundleResourceName:(id)a0 publicName:(id)a1 catalystName:(id)a2;

@end
