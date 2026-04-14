@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (id)_loadSeedAudiencesFromPlist;
+ (long long)currentSeedProgram;
+ (long long)_seedProgramForString:(id)a0;
+ (id)_loadSeedCatalogsFromPlist;
+ (BOOL)_currentCatalogIsSeed;
+ (void)_createFeedbackAssistantSymlink;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (void)_clearAudience;
+ (id)stringForSeedProgram:(long long)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (void)_clearSeedCatalog;
+ (BOOL)fixUpAssetAudience;
+ (BOOL)_removeSeedEnrollmentCookie;
+ (BOOL)isEnrolledInSeedProgram;
+ (BOOL)unenrollFromSeedProgram;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (long long)_legacyCurrentSeedProgram;
+ (void)_setSeedProgramPref:(long long)a0;
+ (BOOL)_canEnrollInBetaSoftware;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;

@end
