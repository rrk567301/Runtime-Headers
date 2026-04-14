@class NSArray, NSDictionary, NSURL, NSData, NSString;
@protocol MIPlaceholderConstructorIconGenerator;

@interface MIPlaceholderConstructor : NSObject

@property (nonatomic) unsigned long long placeholderType;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *partialInfoPlist;
@property (retain, nonatomic) NSData *installUUID;
@property (retain, nonatomic) NSData *installSessionUUID;
@property (copy, nonatomic) NSDictionary *entitlements;
@property (nonatomic) BOOL isLaunchProhibited;
@property (copy, nonatomic) NSArray *pluginPlaceholderConstructors;
@property (retain, nonatomic) NSString *iconFileName;
@property (nonatomic) BOOL preserveFullInfoPlist;
@property (retain, nonatomic) id<MIPlaceholderConstructorIconGenerator> iconGenerator;
@property (copy, nonatomic) NSURL *substituteIconFileURL;
@property (nonatomic) BOOL performPlaceholderInstallActions;
@property (nonatomic) unsigned long long iconPreservationLevel;

+ (id)_iconKeys;
+ (id)_infoPlistKeysToLoad;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 byPreservingFullInfoPlist:(BOOL)a1 error:(id *)a2;
- (id)_initWithSource:(id)a0 byPreservingFullInfoPlist:(BOOL)a1 forBundleType:(unsigned long long)a2 error:(id *)a3;
- (id)_entitlementsForPath:(id)a0 error:(id *)a1;
- (BOOL)_loadPartialInfoPlistWithError:(id *)a0;
- (BOOL)_constructPluginPlaceholdersForDirectory:(id)a0 appendingToArray:(id)a1 bundleType:(unsigned long long)a2 error:(id *)a3;
- (BOOL)_populatePluginPlaceholderConstructorsWithError:(id *)a0;
- (BOOL)_introspectWithError:(id *)a0;
- (BOOL)_writeInfoPlistToPlaceholder:(id)a0 withError:(id *)a1;
- (BOOL)_copyStringsToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)_copyInfoPlistLoctableToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)_writeIconToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)a0 error:(id *)a1;
- (BOOL)materializeIntoBundleDirectory:(id)a0 error:(id *)a1;

@end
