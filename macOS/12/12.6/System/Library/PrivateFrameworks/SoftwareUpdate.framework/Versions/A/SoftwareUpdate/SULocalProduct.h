@class SUProduct, NSString, NSDictionary, NSMutableSet, NSURL;

@interface SULocalProduct : SUProduct {
    NSString *_productPath;
    NSDictionary *_packageReferences;
    NSMutableSet *_mustCloseAppsToInstallProduct;
    NSURL *_altDistPackageURL;
}

@property (retain) SUProduct *remoteProduct;

- (void)dealloc;
- (id)orderedPackageSpecifiersToInstall;
- (id)packageReferenceForPackageIdentifier:(id)a0;
- (int)restartAction;
- (BOOL)hasInstallablePackages;
- (unsigned long long)installSize;
- (id)distributionEvaluationMetainfo;
- (id)productPath;
- (id)_localPackageReferenceFromDistribution:(id)a0;
- (id)initWithProduct:(id)a0 productPath:(id)a1 error:(id *)a2;
- (id)distributionPath;
- (id)personalizedManifestsPath;
- (id)distributionEnvironment;
- (id)invalidPackageRefsInProductDirectory;
- (id)outdatedExtraPackageReferences;
- (BOOL)isCompletelyDownloaded;
- (unsigned long long)sizeAlreadyDownloaded;
- (id)mustCloseAppsToInstallProduct;
- (id)systemImagePackage;

@end
