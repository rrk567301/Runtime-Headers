@class IXPlaceholderSeed, NSString, MIStoreMetadata;

@interface IXPlaceholder : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IXPlaceholderSeed *seed;
@property (readonly, copy, nonatomic) NSString *bundleName;
@property (readonly, copy, nonatomic) NSString *bundleDirectoryName;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long placeholderType;
@property (readonly, nonatomic) unsigned long long installType;
@property (readonly, nonatomic) BOOL hasIconPromise;
@property (readonly, nonatomic) BOOL hasIconResourcesPromise;
@property (readonly, nonatomic) BOOL hasEntitlementsPromise;
@property (readonly, nonatomic) BOOL hasInfoPlistLoctablePromise;
@property (readonly, nonatomic) BOOL hasPlugInPlaceholderPromises;
@property (copy, nonatomic) MIStoreMetadata *metadata;

+ (id)_iconContentForBundleAtURL:(id)a0 infoPlistIconContent:(id *)a1 withStagingPath:(id)a2 error:(id *)a3;
+ (id)_iconDataForBundle:(struct __CFBundle { } *)a0 atURL:(id)a1 isFromSerializedPlaceholder:(BOOL)a2 error:(id *)a3;
+ (id)_infoPlistLocalizationDictionaryForBundleURL:(id)a0 error:(id *)a1;
+ (id)_placeholderForBundle:(id)a0 client:(unsigned long long)a1 withParent:(id)a2 installType:(unsigned long long)a3 metadata:(id)a4 placeholderType:(unsigned long long)a5 mayBeDeltaPackage:(BOOL)a6 isFromSerializedPlaceholder:(BOOL)a7 location:(id)a8 error:(id *)a9;
+ (id)_placeholderForInstallable:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 metadata:(id)a3 isFromSerializedPlaceholder:(BOOL)a4 location:(id)a5 error:(id *)a6;
+ (id)_pngDataForCGImage:(struct CGImage { } *)a0 error:(id *)a1;
+ (BOOL)_setEntitlementsFromBundleExecutableURL:(id)a0 withBundleID:(id)a1 client:(unsigned long long)a2 onPlaceholder:(id)a3 location:(id)a4 error:(id *)a5;
+ (id)placeholderForInstallable:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 metadata:(id)a3 error:(id *)a4;
+ (id)placeholderForInstallable:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 metadata:(id)a3 location:(id)a4 error:(id *)a5;
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 error:(id *)a3;
+ (id)placeholderFromSerializedPlaceholder:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 error:(id *)a3;
+ (id)placeholderFromSerializedPlaceholder:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 location:(id)a3 error:(id *)a4;

- (id)bundleID;
- (id)initWithSeed:(id)a0;
- (id)metadata;
- (void)encodeWithCoder:(id)a0;
- (id)bundleName;
- (unsigned long long)installType;
- (void)setMetadata:(id)a0;
- (id)metadataWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpecification:(id)a0 error:(id *)a1;
- (unsigned long long)placeholderType;
- (id)bundleDirectoryName;
- (BOOL)_doInitWithSpecification:(id)a0 error:(id *)a1;
- (id)placeholderAttributesWithError:(id *)a0;
- (BOOL)setPlaceholderAttributes:(id)a0 error:(id *)a1;
- (id)_initAppExtensionPlaceholderWithBundleURL:(id)a0 bundleName:(id)a1 bundleID:(id)a2 parentPlaceholder:(id)a3 client:(unsigned long long)a4 location:(id)a5 error:(id *)a6;
- (id)appExtensionPlaceholderPromisesWithError:(id *)a0;
- (id)entitlementsPromiseWithError:(id *)a0;
- (id)iconPromiseWithError:(id *)a0;
- (id)iconResourcesPromiseWithInfoPlistContent:(id *)a0 error:(id *)a1;
- (id)infoPlistLocalizationsWithError:(id *)a0;
- (id)infoPlistLoctablePromiseWithError:(id *)a0;
- (id)initAppPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 client:(unsigned long long)a3;
- (id)initAppPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 client:(unsigned long long)a3 error:(id *)a4;
- (id)initAppPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 client:(unsigned long long)a3 location:(id)a4 error:(id *)a5;
- (id)initExtensionKitPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3;
- (id)initExtensionKitPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 error:(id *)a4;
- (id)initExtensionKitPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 location:(id)a4 error:(id *)a5;
- (id)initPlugInPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3;
- (id)initPlugInPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 error:(id *)a4;
- (id)initPlugInPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 location:(id)a4 error:(id *)a5;
- (BOOL)launchProhibited:(BOOL *)a0 error:(id *)a1;
- (id)plugInPlaceholderPromisesWithError:(id *)a0;
- (Class)seedClass;
- (BOOL)setAppExtensionPlaceholderPromises:(id)a0 error:(id *)a1;
- (BOOL)setConfigurationCompleteWithError:(id *)a0;
- (BOOL)setEntitlementsPromise:(id)a0 error:(id *)a1;
- (BOOL)setIconPromise:(id)a0 error:(id *)a1;
- (BOOL)setIconResourcesPromise:(id)a0 withInfoPlistContent:(id)a1 error:(id *)a2;
- (BOOL)setInfoPlistLocalizations:(id)a0 error:(id *)a1;
- (BOOL)setInfoPlistLoctablePromise:(id)a0 error:(id *)a1;
- (BOOL)setLaunchProhibited:(BOOL)a0 error:(id *)a1;
- (BOOL)setMetadata:(id)a0 error:(id *)a1;
- (BOOL)setPlugInPlaceholderPromises:(id)a0 error:(id *)a1;
- (BOOL)setSinfData:(id)a0 error:(id *)a1;
- (id)sinfDataWithError:(id *)a0;

@end
