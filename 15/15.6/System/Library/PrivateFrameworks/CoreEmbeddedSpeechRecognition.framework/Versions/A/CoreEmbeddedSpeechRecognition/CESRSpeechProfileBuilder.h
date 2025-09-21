@class NSString, NSXPCConnection, NSURL, NSLocale, NSMutableArray;

@interface CESRSpeechProfileBuilder : NSObject {
    NSXPCConnection *_connection;
    NSMutableArray *_pendingItems;
    NSMutableArray *_sourceBundleIds;
    NSMutableArray *_isBoosted;
    unsigned long long _summedCommittedItemsMemoryInBytes;
    unsigned long long _uncommittedItemsMemoryInBytes;
}

@property (readonly, nonatomic) NSURL *directory;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) long long dataProtectionClass;

+ (id)supportedCategories;
+ (id)CESRErrorForXPCError:(id)a0;
+ (id)_appEntityConfig;
+ (char)appEntityFeatureFlagEnabled;
+ (id)categoryToFieldTypeMap;
+ (id)categoryToLimitHintMap;
+ (void)deleteLegacyProfiles;
+ (char)deleteProfileAtDirectory:(id)a0 locale:(id)a1 userId:(id)a2 error:(id *)a3;
+ (id)getSpeechLocaleForLocale:(id)a0;
+ (id)profileDirPathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (id)profileFilePathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (char)shouldOverrideDeferralForCategory:(id)a0 updateMode:(unsigned long long)a1;
+ (id)speechProfilePathsForLocale:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_newConnection;
- (char)_flushItemsWithError:(id *)a0;
- (char)_setProfileConfigWithLanguage:(id)a0 profileDir:(id)a1 userId:(id)a2 personaId:(id)a3 dataProtectionClass:(long long)a4 isInUserVault:(char)a5;
- (char)addCodepathId:(id)a0 error:(id *)a1;
- (char)addVocabularyItem:(id)a0 sourceBundleId:(id)a1 isBoosted:(char)a2 error:(id *)a3;
- (char)beginWithCategoriesAndVersions:(id)a0 bundleId:(id)a1 error:(id *)a2;
- (char)cancelCategoriesWithError:(id *)a0;
- (char)finishAndSaveProfile:(char)a0 error:(id *)a1;
- (id)getCodepathIdsWithError:(id *)a0;
- (unsigned long long)getGlobalItemsMemoryLimitInBytes;
- (long long)getVersionForCategory:(id)a0 error:(id *)a1;
- (id)initWithDirectory:(id)a0 locale:(id)a1 userId:(id)a2 personaId:(id)a3 dataProtectionClass:(long long)a4 isInUserVault:(char)a5;
- (char)removeCodepathId:(id)a0 error:(id *)a1;

@end
