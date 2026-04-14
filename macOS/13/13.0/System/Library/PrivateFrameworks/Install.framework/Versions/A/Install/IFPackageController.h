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

- (void)dealloc;
- (id)name;
- (id)objectForKey:(id)a0;
- (id)identifier;
- (id)version;
- (id)package;
- (id)groups;
- (id)location;
- (id)dependencies;
- (id)title;
- (id)information;
- (id)searchContext;
- (id)destinationLocation;
- (void)setDestinationLocation:(id)a0;
- (id)sourceURL;
- (id)destinationPath;
- (id)targetVolume;
- (void)setTargetVolume:(id)a0;
- (id)receipt;
- (id)objectForKey:(id)a0 localization:(id)a1;
- (id)installPlan;
- (id)searchDefinitions;
- (id)digestOfType:(id)a0;
- (id)taints;
- (id)catalogInfo;
- (id)initWithPackageRep:(id)a0 error:(id *)a1;
- (int)installKey;
- (void)setInstallKey:(int)a0;
- (BOOL)isHomeInstall;
- (void)setResolvedPath:(id)a0 forComponent:(id)a1;
- (id)resolvedPathForComponent:(id)a0;
- (id)absolutePathFromRelativePath:(id)a0;
- (void)invalidateDBHandle;
- (BOOL)hasReceipt;
- (void)setShouldBackRev:(BOOL)a0;
- (BOOL)shouldBackRev;
- (BOOL)_readTokenDefintions;
- (id)_pathsForUserLocation;

@end
