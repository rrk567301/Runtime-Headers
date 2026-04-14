@class PKDistributionContainer, NSMutableDictionary, PKArchive, NSString;

@interface PKArchiveProduct : PKMutableProduct {
    PKArchive *_archive;
    PKDistributionContainer *_container;
    NSMutableDictionary *_packageIdentifierToURLMap;
    NSString *_productIdentifier;
    NSString *_productVersion;
    NSString *_scriptsPath;
    NSString *_installerPluginsPath;
}

+ (BOOL)canInitWithURL:(id)a0;

- (void)dealloc;
- (BOOL)commitReturningError:(id *)a0;
- (id)URL;
- (id)distribution;
- (BOOL)setDistribution:(id)a0;
- (id)productVersion;
- (id)productType;
- (id)productIdentifier;
- (id)localizedStringForKey:(id)a0 value:(id)a1;
- (id)allPackageReferences;
- (id)_initWithPath:(id)a0 error:(id *)a1;
- (id)distributionContainer;
- (id)stringsDictionary;
- (id)_identifierVersionTuple:(id)a0;
- (id)initByLoadingProductAtURL:(id)a0 error:(id *)a1;
- (id)_archiveForTrustEvaluation;
- (id)initForWritingToArchive:(id)a0 signingDelegate:(id)a1 error:(id *)a2;
- (void)setProductIdentifier:(id)a0 version:(id)a1;
- (BOOL)setDistributionFromContainer:(id)a0;
- (void)_setScriptsPath:(id)a0;
- (void)_setInstallerPluginsPath:(id)a0;
- (BOOL)addResourceDataAtPath:(id)a0;
- (id)suggestedPackagePathFromPackageReference:(id)a0;
- (BOOL)registerPackageReference:(id)a0;
- (BOOL)unregisterPackageReference:(id)a0 deletePackage:(BOOL)a1;
- (BOOL)_writeCompressedCPIOForRoot:(id)a0 intoArchivePath:(id)a1 largeAndSegmented:(BOOL)a2 error:(id *)a3;

@end
