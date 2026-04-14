@interface PKMutableProduct : PKProduct

- (BOOL)commitReturningError:(id *)a0;
- (BOOL)setDistribution:(id)a0;
- (BOOL)writeToArchive:(id)a0 error:(id *)a1;
- (BOOL)setDistributionFromContainer:(id)a0;
- (void)setProductIdentifier:(id)a0 version:(id)a1;
- (void)_setScriptsPath:(id)a0;
- (void)_setInstallerPluginsPath:(id)a0;
- (BOOL)addResourceDataAtPath:(id)a0;
- (id)suggestedPackagePathFromPackageReference:(id)a0;
- (BOOL)registerPackageReference:(id)a0;
- (BOOL)unregisterPackageReference:(id)a0 deletePackage:(BOOL)a1;
- (id)initForWritingToArchive:(id)a0 ofType:(id)a1 signingDelegate:(id)a2 error:(id *)a3;
- (id)initForWritingToArchive:(id)a0 ofType:(id)a1 error:(id *)a2;
- (BOOL)writeProduct;
- (id)_initForWritingAtPath:(id)a0 ofType:(id)a1 error:(id *)a2;

@end
