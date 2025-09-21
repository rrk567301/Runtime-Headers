@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)_canEnrollInBetaSoftware;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (void)_clearSeedCatalog;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)_currentAudienceIsSeed;
+ (void)_createFeedbackAssistantSymlink;
+ (BOOL)_removeSeedEnrollmentCookie;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (id)_loadSeedCatalogsFromPlist;
+ (BOOL)fixUpAssetAudience;
+ (void)_setSeedProgramPref:(long long)a0;
+ (id)_loadSeedAudiencesFromPlist;
+ (BOOL)isEnrolledInSeedProgram;
+ (long long)currentSeedProgram;
+ (long long)_seedProgramForString:(id)a0;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)_currentCatalogIsSeed;
+ (void)_clearAudience;
+ (long long)_legacyCurrentSeedProgram;
+ (BOOL)unenrollFromSeedProgram;

@end
