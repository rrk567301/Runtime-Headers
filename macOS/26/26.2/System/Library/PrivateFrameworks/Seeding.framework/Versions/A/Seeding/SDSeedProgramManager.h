@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)unenrollFromSeedProgram;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (id)_loadSeedCatalogsFromPlist;
+ (id)_loadSeedAudiencesFromPlist;
+ (long long)_seedProgramForString:(id)a0;
+ (long long)currentSeedProgram;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)isEnrolledInSeedProgram;
+ (void)_createFeedbackAssistantSymlink;
+ (BOOL)_removeSeedEnrollmentCookie;
+ (BOOL)_currentCatalogIsSeed;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)fixUpAssetAudience;
+ (BOOL)_canEnrollInBetaSoftware;
+ (void)_clearAudience;
+ (void)_setSeedProgramPref:(long long)a0;
+ (void)_clearSeedCatalog;
+ (long long)_legacyCurrentSeedProgram;

@end
