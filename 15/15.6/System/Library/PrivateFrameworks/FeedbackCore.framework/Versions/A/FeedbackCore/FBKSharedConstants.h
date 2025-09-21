@class NSUserDefaults;

@interface FBKSharedConstants : FBKSSharedConstants

@property (class, readonly, nonatomic) NSUserDefaults *sharedUserDefaults;
@property (class, readonly, nonatomic) char isFormItemsDisabled;

+ (void)initialize;
+ (id)modelName;
+ (char)isProductionEnvironment;
+ (id)darkModeCSS;
+ (void)saveLocalizedAttachmentLegalText:(id)a0 draftID:(id)a1;
+ (char)usesTemporaryDraftsDirectory;
+ (void)recordCurrentLanguagePreference;
+ (id)_localizedAttachmentLegalTextKeyForDraftID:(id)a0;
+ (char)currentIDMSEnvironmentMatchesCurrentFBKSEnvironment;
+ (long long)currentLegalVersion;
+ (void)deleteAttachmentLegalTextForDraftID:(id)a0;
+ (void)deleteStaleAttachmentLegalTextEntries;
+ (id)developerURL;
+ (char)hasDifferentLanguageSinceLastLaunch;
+ (char)isEnhancedLoggingEnabled;
+ (char)isRunningInFBA;
+ (char)listsFormsFetchedByTat;
+ (id)localizedAttachmentLegalTextForDraftID:(id)a0;
+ (id)portalURL;
+ (char)tracksFileUploadsLocally;
+ (char)usesPersistentStore;

@end
