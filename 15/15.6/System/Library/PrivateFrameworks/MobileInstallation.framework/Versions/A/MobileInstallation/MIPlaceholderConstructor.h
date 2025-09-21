@class NSArray, NSDictionary, NSURL, NSData, NSString;

@interface MIPlaceholderConstructor : NSObject

@property (nonatomic) unsigned long long placeholderType;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *infoPlistContent;
@property (retain, nonatomic) NSData *installUUID;
@property (retain, nonatomic) NSData *installSessionUUID;
@property (copy, nonatomic) NSDictionary *entitlements;
@property (copy, nonatomic) NSArray *appExtensionPlaceholderConstructors;
@property (copy, nonatomic) NSArray *embeddedWatchAppPlaceholderConstructors;
@property (copy, nonatomic) NSArray *embeddedAppClipPlaceholderConstructors;
@property (nonatomic) char preserveFullInfoPlist;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (nonatomic) char performPlaceholderInstallActions;
@property (readonly, nonatomic) char isLaunchProhibited;
@property (readonly, nonatomic) MIPlaceholderConstructor *firstNetworkExtension;
@property (nonatomic) char includeWatchAppPlaceholders;
@property (nonatomic) char includeAppClipPlaceholders;
@property (nonatomic) char basicIOSPlaceholderForWatchOSLessThanSix;

+ (id)_infoPlistKeysToLoad;

- (void).cxx_destruct;
- (char)_loadInfoPlistContentWithError:(id *)a0;
- (char)_writeInfoPlistToPlaceholder:(id)a0 substitutingIconContent:(id)a1 withError:(id *)a2;
- (char)_constructPlaceholdersForDirectory:(id)a0 itemsWithPathExtension:(id)a1 appendingToArray:(id)a2 bundleType:(unsigned long long)a3 error:(id *)a4;
- (char)_copyInfoPlistLoctableToPlaceholder:(id)a0 error:(id *)a1;
- (char)_copyStringsToPlaceholder:(id)a0 onlyDirectories:(char)a1 error:(id *)a2;
- (id)_entitlementsForPath:(id)a0 error:(id *)a1;
- (id)_initWithSource:(id)a0 byPreservingFullInfoPlist:(char)a1 forBundleType:(unsigned long long)a2 error:(id *)a3;
- (char)_introspectWithError:(id *)a0;
- (char)_materializeConstructors:(id)a0 intoBundle:(id)a1 error:(id *)a2;
- (char)_populateAppExtensionPlaceholderConstructorsWithError:(id *)a0;
- (char)_populateEmbeddedAppClipPlaceholderConstructorsWithError:(id *)a0;
- (char)_populateEmbeddedWatchAppPlaceholderConstructorsWithError:(id *)a0;
- (char)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)a0 error:(id *)a1;
- (char)_writeIconToPlaceholder:(id)a0 infoPlistIconContent:(id *)a1 error:(id *)a2;
- (id)initWithSource:(id)a0 byPreservingFullInfoPlist:(char)a1 error:(id *)a2;
- (char)materializeIntoBundleDirectory:(id)a0 error:(id *)a1;

@end
