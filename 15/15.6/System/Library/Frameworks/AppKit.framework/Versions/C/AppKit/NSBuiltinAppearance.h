@class NSString, NSBundle;

@interface NSBuiltinAppearance : NSAppearance {
    NSBundle *_systemAppearanceBundle;
    NSString *_publicName;
    NSString *_catalystName;
}

- (void)dealloc;
- (char)isEqual:(id)a0;
- (id)name;
- (id)_bundleResourceName;
- (id)_catalystName;
- (char)_isBuiltinAppearance;
- (id)appearanceByApplyingTintColor:(id)a0;
- (id)initWithBundleResourceName:(id)a0 publicName:(id)a1 catalystName:(id)a2;

@end
