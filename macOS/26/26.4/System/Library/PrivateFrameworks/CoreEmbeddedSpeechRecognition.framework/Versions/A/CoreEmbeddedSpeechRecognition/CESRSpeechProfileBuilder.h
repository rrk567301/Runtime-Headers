@class NSXPCConnection, NSURL, NSLocale, NSMutableArray;

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
@property (readonly, nonatomic) long long dataProtectionClass;

+ (id)supportedCategories;
+ (id)categoryToFieldTypeMap;
+ (id)speechProfilePathsForLocale:(id)a0;
+ (id)profileFilePathFromBasePath:(id)a0 language:(id)a1;
+ (BOOL)deleteProfileInDirectory:(id)a0 locale:(id)a1 error:(id *)a2;
+ (id)profileDirectoryPathFromBasePath:(id)a0 language:(id)a1;
+ (id)getSpeechLocaleForLocale:(id)a0;
+ (id)speechProfileURLsForLocale:(id)a0;
+ (id)categoryToLimitHintMap;
+ (id)_speechProfileConfig;
+ (id)CESRProfileErrorForXPCError:(id)a0;
+ (void)deleteLegacyProfiles;
+ (unsigned short)_fieldTypeFromString:(id)a0;
+ (BOOL)appEntityFeatureFlagEnabled;

- (BOOL)beginWithCategoriesAndVersions:(id)a0 bundleId:(id)a1 error:(id *)a2;
- (BOOL)_setProfileConfigWithLanguage:(id)a0 profileDir:(id)a1 personaId:(id)a2 dataProtectionClass:(long long)a3 isInUserVault:(BOOL)a4;
- (unsigned long long)getGlobalItemsMemoryLimitInBytes;
- (BOOL)cancelCategoriesWithError:(id *)a0;
- (BOOL)finishAndSaveProfile:(BOOL)a0 error:(id *)a1;
- (BOOL)addCodepathId:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_flushItemsWithError:(id *)a0;
- (id)initWithDirectory:(id)a0 locale:(id)a1 personaId:(id)a2 dataProtectionClass:(long long)a3 isInUserVault:(BOOL)a4;
- (id)_newConnection;
- (long long)getVersionForCategory:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)addVocabularyItem:(id)a0 sourceBundleId:(id)a1 isBoosted:(BOOL)a2 error:(id *)a3;
- (id)getCodepathIdsWithError:(id *)a0;
- (BOOL)removeCodepathId:(id)a0 error:(id *)a1;

@end
