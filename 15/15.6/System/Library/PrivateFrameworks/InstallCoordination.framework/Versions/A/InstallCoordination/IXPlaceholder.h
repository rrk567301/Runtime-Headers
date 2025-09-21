@class IXPlaceholderSeed, NSString, MIStoreMetadata;

@interface IXPlaceholder : IXOwnedDataPromise <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) IXPlaceholderSeed *seed;
@property (readonly, copy, nonatomic) NSString *bundleName;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long placeholderType;
@property (readonly, nonatomic) unsigned long long installType;
@property (readonly, nonatomic) char hasIconPromise;
@property (readonly, nonatomic) char hasIconResourcesPromise;
@property (readonly, nonatomic) char hasEntitlementsPromise;
@property (readonly, nonatomic) char hasInfoPlistLoctablePromise;
@property (readonly, nonatomic) char hasPlugInPlaceholderPromises;
@property (copy, nonatomic) MIStoreMetadata *metadata;

+ (id)_iconContentForBundleAtURL:(id)a0 infoPlistIconContent:(id *)a1 error:(id *)a2;
+ (id)_iconDataForBundle:(struct __CFBundle { } *)a0 atURL:(id)a1 isFromSerializedPlaceholder:(char)a2 error:(id *)a3;
+ (id)_infoPlistLocalizationDictionaryForBundleURL:(id)a0 error:(id *)a1;
+ (id)_placeholderForBundle:(id)a0 client:(unsigned long long)a1 withParent:(id)a2 installType:(unsigned long long)a3 metadata:(id)a4 placeholderType:(unsigned long long)a5 mayBeDeltaPackage:(char)a6 isFromSerializedPlaceholder:(char)a7 error:(id *)a8;
+ (id)_placeholderForInstallable:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 metadata:(id)a3 isFromSerializedPlaceholder:(char)a4 error:(id *)a5;
+ (id)_pngDataForCGImage:(struct CGImage { } *)a0 error:(id *)a1;
+ (char)_setEntitlementsFromBundleExecutableURL:(id)a0 withBundleID:(id)a1 client:(unsigned long long)a2 onPlaceholder:(id)a3 error:(id *)a4;
+ (id)placeholderForInstallable:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 metadata:(id)a3 error:(id *)a4;
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 error:(id *)a3;
+ (id)placeholderFromSerializedPlaceholder:(id)a0 client:(unsigned long long)a1 installType:(unsigned long long)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundleID;
- (id)bundleName;
- (unsigned long long)installType;
- (id)metadata;
- (void)setBundleID:(id)a0;
- (void)setMetadata:(id)a0;
- (id)initWithSeed:(id)a0;
- (void)setBundleName:(id)a0;
- (unsigned long long)placeholderType;
- (char)setPlaceholderAttributes:(id)a0 error:(id *)a1;
- (id)placeholderAttributesWithError:(id *)a0;
- (char)_doInitWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 placeholderType:(unsigned long long)a3 error:(id *)a4;
- (id)_initAppExtensionPlaceholderWithBundleURL:(id)a0 bundleName:(id)a1 bundleID:(id)a2 parentPlaceholder:(id)a3 client:(unsigned long long)a4 error:(id *)a5;
- (char)_internalInitAppExtensionPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 placeholderType:(unsigned long long)a3 client:(unsigned long long)a4 error:(id *)a5;
- (id)appExtensionPlaceholderPromisesWithError:(id *)a0;
- (id)entitlementsPromiseWithError:(id *)a0;
- (id)iconPromiseWithError:(id *)a0;
- (id)iconResourcesPromiseWithInfoPlistContent:(id *)a0 error:(id *)a1;
- (id)infoPlistLocalizationsWithError:(id *)a0;
- (id)infoPlistLoctablePromiseWithError:(id *)a0;
- (id)initAppPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 client:(unsigned long long)a3;
- (id)initAppPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 installType:(unsigned long long)a2 client:(unsigned long long)a3 error:(id *)a4;
- (id)initExtensionKitPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3;
- (id)initExtensionKitPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 error:(id *)a4;
- (id)initPlugInPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3;
- (id)initPlugInPlaceholderWithBundleName:(id)a0 bundleID:(id)a1 parentPlaceholder:(id)a2 client:(unsigned long long)a3 error:(id *)a4;
- (char)launchProhibited:(char *)a0 error:(id *)a1;
- (id)metadataWithError:(id *)a0;
- (id)plugInPlaceholderPromisesWithError:(id *)a0;
- (Class)seedClass;
- (char)setAppExtensionPlaceholderPromises:(id)a0 error:(id *)a1;
- (char)setConfigurationCompleteWithError:(id *)a0;
- (char)setEntitlementsPromise:(id)a0 error:(id *)a1;
- (char)setIconPromise:(id)a0 error:(id *)a1;
- (char)setIconResourcesPromise:(id)a0 withInfoPlistContent:(id)a1 error:(id *)a2;
- (char)setInfoPlistLocalizations:(id)a0 error:(id *)a1;
- (char)setInfoPlistLoctablePromise:(id)a0 error:(id *)a1;
- (char)setLaunchProhibited:(char)a0 error:(id *)a1;
- (char)setMetadata:(id)a0 error:(id *)a1;
- (char)setPlugInPlaceholderPromises:(id)a0 error:(id *)a1;
- (char)setSinfData:(id)a0 error:(id *)a1;
- (id)sinfDataWithError:(id *)a0;

@end
