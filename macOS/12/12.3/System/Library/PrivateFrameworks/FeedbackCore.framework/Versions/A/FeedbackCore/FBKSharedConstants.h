@interface FBKSharedConstants : NSObject

@property (class, readonly, nonatomic) BOOL isTeamsEnabled;

+ (void)initialize;
+ (long long)platform;
+ (short)environment;
+ (id)productVersion;
+ (id)modelName;
+ (id)sharedUserDefaults;
+ (BOOL)usesTemporaryDraftsDirectory;
+ (id)darkModeCSS;
+ (id)appleSeedURL;
+ (id)seedPortalURL;
+ (void)_deriveSystemVersion;
+ (id)appleSeedURLFromDefaults:(id)a0 withEnvironment:(short)a1;
+ (id)publicBetaURL;
+ (BOOL)usesPersistentStore;
+ (id)swVers;
+ (id)swTrain;
+ (void)recordCurrentLanguagePreference;
+ (BOOL)hasDifferentLanguageSinceLastLaunch;
+ (id)publicPortalURL;
+ (id)developerURL;
+ (long long)currentLegalVersion;
+ (BOOL)currentIDMSEnvironmentMatchesCurrentFBKEnvironment;
+ (BOOL)tracksFileUploadsLocally;

@end
