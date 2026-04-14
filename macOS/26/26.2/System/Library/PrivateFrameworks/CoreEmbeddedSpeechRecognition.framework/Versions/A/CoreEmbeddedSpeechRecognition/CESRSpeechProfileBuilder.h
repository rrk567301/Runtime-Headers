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

+ (BOOL)deleteProfileAtDirectory:(id)a0 locale:(id)a1 userId:(id)a2 error:(id *)a3;
+ (void)deleteLegacyProfiles;
+ (id)profileFilePathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (BOOL)appEntityFeatureFlagEnabled;
+ (id)profileDirPathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (id)CESRErrorForXPCError:(id)a0;
+ (id)_speechProfileConfig;
+ (id)getSpeechLocaleForLocale:(id)a0;
+ (id)speechProfilePathsForLocale:(id)a0;
+ (id)categoryToLimitHintMap;
+ (unsigned short)_fieldTypeFromString:(id)a0;
+ (id)categoryToFieldTypeMap;
+ (id)supportedCategories;

- (BOOL)addVocabularyItem:(id)a0 sourceBundleId:(id)a1 isBoosted:(BOOL)a2 error:(id *)a3;
- (id)getCodepathIdsWithError:(id *)a0;
- (BOOL)finishAndSaveProfile:(BOOL)a0 error:(id *)a1;
- (BOOL)beginWithCategoriesAndVersions:(id)a0 bundleId:(id)a1 error:(id *)a2;
- (BOOL)_flushItemsWithError:(id *)a0;
- (long long)getVersionForCategory:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)removeCodepathId:(id)a0 error:(id *)a1;
- (id)initWithDirectory:(id)a0 locale:(id)a1 userId:(id)a2 personaId:(id)a3 dataProtectionClass:(long long)a4 isInUserVault:(BOOL)a5;
- (BOOL)addCodepathId:(id)a0 error:(id *)a1;
- (unsigned long long)getGlobalItemsMemoryLimitInBytes;
- (BOOL)cancelCategoriesWithError:(id *)a0;
- (BOOL)_setProfileConfigWithLanguage:(id)a0 profileDir:(id)a1 userId:(id)a2 personaId:(id)a3 dataProtectionClass:(long long)a4 isInUserVault:(BOOL)a5;
- (void)dealloc;
- (id)_newConnection;

@end
