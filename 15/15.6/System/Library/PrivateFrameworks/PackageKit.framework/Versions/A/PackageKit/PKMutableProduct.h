@interface PKMutableProduct : PKProduct

- (char)commitReturningError:(id *)a0;
- (char)setDistribution:(id)a0;
- (id)_initForWritingAtPath:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)_setInstallerPluginsPath:(id)a0;
- (void)_setScriptsPath:(id)a0;
- (char)addResourceDataAtPath:(id)a0;
- (id)initForWritingToArchive:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)initForWritingToArchive:(id)a0 ofType:(id)a1 signingDelegate:(id)a2 error:(id *)a3;
- (char)registerPackageReference:(id)a0;
- (char)setDistributionFromContainer:(id)a0;
- (void)setProductIdentifier:(id)a0 version:(id)a1;
- (id)suggestedPackagePathFromPackageReference:(id)a0;
- (char)unregisterPackageReference:(id)a0 deletePackage:(char)a1;
- (char)writeProduct;
- (char)writeToArchive:(id)a0 error:(id *)a1;

@end
