@class NSString, NSMutableSet;

@interface MILaunchServicesDatabaseGatherer : NSObject <MIFilesystemScannerDelegate>

@property (readonly, nonatomic) NSMutableSet *coreServices;
@property (readonly, nonatomic) NSMutableSet *systemApps;
@property (readonly, nonatomic) NSMutableSet *userApps;
@property (readonly, nonatomic) NSMutableSet *internalApps;
@property (readonly, nonatomic) NSMutableSet *appExtensions;
@property (readonly, nonatomic) NSMutableSet *frameworks;
@property (readonly, nonatomic) NSMutableSet *systemAppPlaceholders;
@property (readonly, nonatomic) id /* block */ enumerator;
@property (readonly, nonatomic) unsigned long long gatherOptions;
@property (readonly, nonatomic) char shouldUpdateAppExtensionDataContainersWithParentID;
@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)entryForBundle:(id)a0 inContainer:(id)a1 forPersona:(id)a2 withError:(id *)a3;
+ (char)enumerateAppExtensionsInBundle:(id)a0 forPersona:(id)a1 updatingAppExtensionParentID:(char)a2 ensureAppExtensionsAreExecutable:(char)a3 installProfiles:(char)a4 error:(id *)a5 enumerator:(id /* block */)a6;
+ (id)fetchInfoForBundle:(id)a0 forPersona:(id)a1 inContainer:(id)a2 withError:(id *)a3;

- (void).cxx_destruct;
- (void)errorOccurred:(id)a0;
- (char)_markDriverKitExtensionsExecutableInBundle:(id)a0 withError:(id *)a1;
- (char)_scanAppExtensionsInBundle:(id)a0 inBundleContainer:(id)a1 withError:(id *)a2;
- (char)_scanBundle:(id)a0 inContainer:(id)a1 addingToBundleSet:(id)a2 enumeratingEntry:(id)a3 withError:(id *)a4;
- (id)_setForEntry:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 enumerator:(id /* block */)a1;
- (id)initWithOptions:(unsigned long long)a0 personaUniqueString:(id)a1 enumerator:(id /* block */)a2;
- (char)performGatherWithError:(id *)a0;
- (char)scanAppExtensionsInFrameworkBundle:(id)a0 withError:(id *)a1;
- (char)scanExecutableBundle:(id)a0 inContainer:(id)a1 forPersona:(id)a2 withError:(id *)a3;

@end
