@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (long long)currentSeedProgram;
+ (void)_clearAudience;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (BOOL)fixUpAssetAudience;
+ (BOOL)isEnrolledInSeedProgram;
+ (long long)_legacyCurrentSeedProgram;
+ (BOOL)_currentAudienceIsSeed;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (void)_createFeedbackAssistantSymlink;
+ (id)_loadSeedAudiencesFromPlist;
+ (void)_clearSeedCatalog;
+ (BOOL)_canEnrollInBetaSoftware;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (void)_setSeedProgramPref:(long long)a0;
+ (BOOL)unenrollFromSeedProgram;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (id)_loadSeedCatalogsFromPlist;
+ (BOOL)_currentCatalogIsSeed;
+ (long long)_seedProgramForString:(id)a0;
+ (BOOL)_removeSeedEnrollmentCookie;

@end
