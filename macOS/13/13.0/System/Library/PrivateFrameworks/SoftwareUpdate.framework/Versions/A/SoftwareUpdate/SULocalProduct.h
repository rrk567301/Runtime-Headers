@class SUProduct, NSString, NSDictionary, NSMutableSet, NSURL;

@interface SULocalProduct : SUProduct {
    NSString *_productPath;
    NSDictionary *_packageReferences;
    NSMutableSet *_mustCloseAppsToInstallProduct;
    NSURL *_altDistPackageURL;
}

@property (retain) SUProduct *remoteProduct;

- (void)dealloc;
- (int)restartAction;
- (id)orderedPackageSpecifiersToInstall;
- (id)packageReferenceForPackageIdentifier:(id)a0;
- (BOOL)hasInstallablePackages;
- (unsigned long long)installSize;
- (id)distributionEvaluationMetainfo;
- (id)initWithProduct:(id)a0 productPath:(id)a1 error:(id *)a2;
- (id)productPath;
- (id)distributionPath;
- (id)personalizedManifestsPath;
- (id)distributionEnvironment;
- (id)_localPackageReferenceFromDistribution:(id)a0;
- (id)invalidPackageRefsInProductDirectory;
- (id)outdatedExtraPackageReferences;
- (BOOL)isCompletelyDownloaded;
- (unsigned long long)sizeAlreadyDownloaded;
- (id)mustCloseAppsToInstallProduct;
- (id)systemImagePackage;

@end
