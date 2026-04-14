@class NSViewController;

@interface PXViewControllerExtendedTraitCollection : PXExtendedTraitCollection

@property (readonly, weak, nonatomic) NSViewController *viewController;

+ (long long)userInterfaceFeatureForViewController:(id)a0;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)viewIfLoaded;
- (id)_initForSubclassWithUserInterfaceFeature:(long long)a0;
- (id)rootExtendedTraitCollection;

@end
