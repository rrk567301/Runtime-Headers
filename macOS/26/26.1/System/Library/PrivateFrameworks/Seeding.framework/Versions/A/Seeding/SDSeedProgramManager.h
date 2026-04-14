@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (id)_loadSeedCatalogsFromPlist;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (void)_clearSeedCatalog;
+ (BOOL)fixUpAssetAudience;
+ (void)_clearAudience;
+ (id)_loadSeedAudiencesFromPlist;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)_removeSeedEnrollmentCookie;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)_currentCatalogIsSeed;
+ (BOOL)isEnrolledInSeedProgram;
+ (long long)currentSeedProgram;
+ (BOOL)_canEnrollInBetaSoftware;
+ (void)_setSeedProgramPref:(long long)a0;
+ (BOOL)unenrollFromSeedProgram;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (long long)_legacyCurrentSeedProgram;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (void)_createFeedbackAssistantSymlink;
+ (long long)_seedProgramForString:(id)a0;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;

@end
