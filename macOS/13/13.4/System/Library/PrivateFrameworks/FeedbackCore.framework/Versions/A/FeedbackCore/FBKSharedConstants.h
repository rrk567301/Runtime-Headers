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
+ (id)darkModeCSS;
+ (void)overrideEnvironment:(short)a0 host:(id)a1;
+ (void)saveLocalizedAttachmentLegalText:(id)a0 draftID:(id)a1;
+ (BOOL)usesTemporaryDraftsDirectory;
+ (id)publicPortalURL;
+ (void)recordCurrentLanguagePreference;
+ (id)swTrain;
+ (void)_deriveSystemVersion;
+ (id)_localizedAttachmentLegalTextKeyForDraftID:(id)a0;
+ (id)appleSeedURL;
+ (id)appleSeedURLFromDefaults:(id)a0 withEnvironment:(short)a1;
+ (BOOL)currentIDMSEnvironmentMatchesCurrentFBKEnvironment;
+ (long long)currentLegalVersion;
+ (void)deleteAttachmentLegalTextForDraftID:(id)a0;
+ (void)deleteStaleAttachmentLegalTextEntries;
+ (id)developerURL;
+ (BOOL)hasDifferentLanguageSinceLastLaunch;
+ (BOOL)isEnhancedLoggingEnabled;
+ (BOOL)isRunningInFBA;
+ (id)localizedAttachmentLegalTextForDraftID:(id)a0;
+ (id)publicBetaURL;
+ (id)seedPortalURL;
+ (id)swVers;
+ (BOOL)tracksFileUploadsLocally;
+ (BOOL)usesPersistentStore;

@end
