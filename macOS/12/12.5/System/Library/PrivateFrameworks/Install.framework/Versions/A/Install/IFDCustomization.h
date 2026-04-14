@interface IFDCustomization : NSObject {
    struct IFDCustomization_Private { id x0; id x1; id x2; id x3; id x4; id x5; } *_private;
}

- (void)dealloc;
- (id)target;
- (BOOL)empty;
- (id)distribution;
- (id)packagesToInstall;
- (int)requiredPostInstallAction;
- (id)initWithDistribution:(id)a0 andTarget:(id)a1;
- (int)requiredAuthorizationType;
- (id)additionalMedia;
- (void)addPackageToInstall:(id)a0;
- (void)addPackagesToInstall:(id)a0;
- (void)setAlternateLocation:(id)a0 forPackageWithIdentifier:(id)a1;
- (id)alternateLocationForPackageIdentifier:(id)a0;
- (id)mustCloseAppIdentifiers;
- (id)distributionDescribingAdditionalMedia;
- (id)distributionDescribingMediaNamed:(id)a0;

@end
