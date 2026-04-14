@class NSString, NSMutableDictionary;

@interface PKReceipt : NSObject {
    NSMutableDictionary *_receiptDictionary;
    NSString *_bomPath;
    void *_cachedBOM;
    NSString *_bundlePath;
    BOOL _isSecure;
}

+ (void)_clearCache;
+ (id)receiptsOnVolumeAtPath:(id)a0;
+ (void)_clearCacheLocally;
+ (id)_receiptDictionaryPathFromBOMPath:(id)a0;
+ (id)_searchDirectoriesForBOMReceiptsOnDestination:(id)a0 returningSecureIndexes:(id *)a1;
+ (id)__findReceiptsFromBOMsDirectory:(id)a0;
+ (id)_searchDirectoriesForBundleReceiptsOnDestination:(id)a0;
+ (id)__findBundleReceiptsFromDirectory:(id)a0;
+ (id)_sharedReceiptsCache;
+ (id)_findReceiptsOnVolumeAtPath:(id)a0;
+ (id)_sortedReceiptsByPackageVersion:(id)a0;
+ (id)receiptsOnVolumeAtPath:(id)a0 matchingPackageIdentifier:(id)a1;
+ (id)receiptWithIdentifier:(id)a0 volume:(id)a1;
+ (id)receiptWithPackageFileName:(id)a0 volume:(id)a1;
+ (id)receiptsAtPath:(id)a0;
+ (id)_systemContentReceiptsDirectoryPathForSandboxRoot:(id)a0 destination:(id)a1;
+ (id)_systemDataContentReceiptsDirectoryPathForSandboxRoot:(id)a0 destination:(id)a1;
+ (id)_receiptsDirectoryPathForSandboxRoot:(id)a0 destination:(id)a1;
+ (id)_systemContentReceiptsDirectoryPathForDestination:(id)a0;
+ (id)_systemDataContentReceiptsDirectoryPathForDestination:(id)a0;
+ (id)_receiptsDirectoryPathForDestination:(id)a0;
+ (void)_clearCacheWithNotification:(id)a0;
+ (void)_clearCacheInOtherProcesses;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)additionalInfo;
- (id)installDate;
- (id)packageVersion;
- (id)packageIdentifier;
- (id)packageGroups;
- (id)initWithBOMPath:(id)a0;
- (void)_freeBOM;
- (id)initWithBundlePkgPath:(id)a0;
- (id)installProcessName;
- (id)installPrefixPath;
- (BOOL)_isSecure;
- (void)_setSecure:(BOOL)a0;
- (id)_packageName;
- (id)_BOM;
- (void)_setSHA1ChecksumData:(id)a0 forItemAtPath:(id)a1;
- (void)_setACLString:(id)a0 forItemAtPath:(id)a1;
- (void)_setPackageGroups:(id)a0;
- (void)_setPackageName:(id)a0;
- (void)_setInstallProcessName:(id)a0;
- (void)_setInstallPrefixPath:(id)a0;
- (id)receiptStoragePaths;
- (id)_directoryEnumerator;
- (id)_attributesOfItemAtPath:(id)a0;
- (id)_SHA1ChecksumDataOfItemAtPath:(id)a0;
- (id)_ACLStringOfItemAtPath:(id)a0;
- (BOOL)_updateSHA1ChecksumOfItemAtPath:(id)a0 withFile:(id)a1;
- (BOOL)_updateACLsOfItemAtPath:(id)a0 withFile:(id)a1;
- (BOOL)_removeReceiptInDirectory:(id)a0 error:(id *)a1;

@end
