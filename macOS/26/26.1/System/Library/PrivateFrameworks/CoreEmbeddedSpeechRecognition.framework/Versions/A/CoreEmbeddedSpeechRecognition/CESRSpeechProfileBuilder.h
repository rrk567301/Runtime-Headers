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
+ (id)categoryToFieldTypeMap;
+ (id)categoryToLimitHintMap;
+ (BOOL)deleteProfileAtDirectory:(id)a0 locale:(id)a1 userId:(id)a2 error:(id *)a3;
+ (id)speechProfilePathsForLocale:(id)a0;
+ (id)profileFilePathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (BOOL)appEntityFeatureFlagEnabled;
+ (id)profileDirPathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (id)CESRErrorForXPCError:(id)a0;
+ (unsigned short)_fieldTypeFromString:(id)a0;
+ (id)getSpeechLocaleForLocale:(id)a0;
+ (void)deleteLegacyProfiles;
+ (id)_speechProfileConfig;

- (long long)getVersionForCategory:(id)a0 error:(id *)a1;
- (BOOL)cancelCategoriesWithError:(id *)a0;
- (unsigned long long)getGlobalItemsMemoryLimitInBytes;
- (BOOL)_flushItemsWithError:(id *)a0;
- (BOOL)removeCodepathId:(id)a0 error:(id *)a1;
- (id)initWithDirectory:(id)a0 locale:(id)a1 userId:(id)a2 personaId:(id)a3 dataProtectionClass:(long long)a4 isInUserVault:(BOOL)a5;
- (id)getCodepathIdsWithError:(id *)a0;
- (void)dealloc;
- (BOOL)_setProfileConfigWithLanguage:(id)a0 profileDir:(id)a1 userId:(id)a2 personaId:(id)a3 dataProtectionClass:(long long)a4 isInUserVault:(BOOL)a5;
- (BOOL)addCodepathId:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)beginWithCategoriesAndVersions:(id)a0 bundleId:(id)a1 error:(id *)a2;
- (BOOL)finishAndSaveProfile:(BOOL)a0 error:(id *)a1;
- (id)_newConnection;
- (BOOL)addVocabularyItem:(id)a0 sourceBundleId:(id)a1 isBoosted:(BOOL)a2 error:(id *)a3;

@end
