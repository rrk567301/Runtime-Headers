@class NSString, NSBundle;

@interface NSBuiltinAppearance : NSAppearance {
    NSBundle *_systemAppearanceBundle;
    NSString *_publicName;
    NSString *_catalystName;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (BOOL)_isBuiltinAppearance;
- (id)appearanceByApplyingTintColor:(id)a0;
- (id)_catalystName;
- (id)_bundleResourceName;
- (id)initWithBundleResourceName:(id)a0 publicName:(id)a1 catalystName:(id)a2;

@end
