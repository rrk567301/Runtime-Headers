@class PFPackage, NSString, NSURL, NSLock, IFDiskObject, NSDictionary, IFInstallPlan, IFSearchContext, PFReceipt;

@interface IFPackageController : NSObject <PFMeta> {
    PFPackage *_package;
    PFReceipt *_receipt;
    BOOL _lookedForReceipt;
    BOOL _DBRefMadeInvalidByFsck;
    BOOL _noReceiptFound;
    BOOL _homeInstall;
    NSURL *_sourceURL;
    NSDictionary *_installState;
    BOOL _shouldBackRev;
    NSLock *_targetLock;
    int installKey;
    IFDiskObject *_targetVolume;
    NSString *_destinationLocation;
    IFInstallPlan *_installPlan;
    IFSearchContext *_searchContext;
}

- (id)package;
- (id)dependencies;
- (id)groups;
- (id)searchContext;
- (id)identifier;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)information;
- (id)version;
- (id)sourceURL;
- (id)title;
- (id)destinationPath;
- (id)name;
- (id)location;
- (id)destinationLocation;
- (void)setDestinationLocation:(id)a0;
- (void)setTargetVolume:(id)a0;
- (id)targetVolume;
- (id)receipt;
- (id)validatedDigest;
- (id)_pathsForUserLocation;
- (BOOL)_readTokenDefintions;
- (id)absolutePathFromRelativePath:(id)a0;
- (id)catalogInfo;
- (id)digestOfType:(id)a0;
- (BOOL)hasReceipt;
- (id)initWithPackageRep:(id)a0 error:(id *)a1;
- (int)installKey;
- (id)installPlan;
- (void)invalidateDBHandle;
- (BOOL)isHomeInstall;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (id)resolvedPathForComponent:(id)a0;
- (id)searchDefinitions;
- (void)setInstallKey:(int)a0;
- (void)setResolvedPath:(id)a0 forComponent:(id)a1;
- (void)setShouldBackRev:(BOOL)a0;
- (BOOL)shouldBackRev;
- (id)taints;

@end
