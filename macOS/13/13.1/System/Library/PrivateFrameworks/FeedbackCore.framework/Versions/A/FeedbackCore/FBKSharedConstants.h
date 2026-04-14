@class NSUserDefaults;

@interface FBKSharedConstants : NSObject

@property (class, readonly, nonatomic) BOOL isTeamsEnabled;
@property (class, readonly, nonatomic) NSUserDefaults *sharedUserDefaults;

+ (void)initialize;
+ (long long)platform;
+ (short)environment;
+ (id)productVersion;
+ (id)modelName;
+ (BOOL)isProductionEnvironment;
+ (BOOL)usesTemporaryDraftsDirectory;
+ (void)saveLocalizedAttachmentLegalText:(id)a0 draftID:(id)a1;
+ (void)overrideEnvironment:(short)a0 host:(id)a1;
+ (id)darkModeCSS;
+ (id)seedPortalURL;
+ (void)_deriveSystemVersion;
+ (id)swVers;
+ (id)swTrain;
+ (void)recordCurrentLanguagePreference;
+ (BOOL)hasDifferentLanguageSinceLastLaunch;
+ (id)appleSeedURLFromDefaults:(id)a0 withEnvironment:(short)a1;
+ (id)appleSeedURL;
+ (id)publicBetaURL;
+ (id)publicPortalURL;
+ (id)developerURL;
+ (long long)currentLegalVersion;
+ (BOOL)currentIDMSEnvironmentMatchesCurrentFBKEnvironment;
+ (BOOL)usesPersistentStore;
+ (BOOL)tracksFileUploadsLocally;
+ (BOOL)isRunningInFBA;
+ (BOOL)isEnhancedLoggingEnabled;
+ (id)localizedAttachmentLegalTextForDraftID:(id)a0;
+ (void)deleteAttachmentLegalTextForDraftID:(id)a0;
+ (void)deleteStaleAttachmentLegalTextEntries;
+ (id)_localizedAttachmentLegalTextKeyForDraftID:(id)a0;

@end
