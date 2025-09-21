@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) char canFileFeedback;

+ (void)_createFeedbackAssistantSymlink;
+ (char)_canEnrollInBetaSoftware;
+ (void)_clearAudience;
+ (void)_clearSeedCatalog;
+ (char)_currentAudienceIsSeed;
+ (char)_currentCatalogIsSeed;
+ (long long)_legacyCurrentSeedProgram;
+ (id)_loadSeedAudiencesFromPlist;
+ (id)_loadSeedCatalogsFromPlist;
+ (char)_removeSeedEnrollmentCookie;
+ (long long)_seedProgramForString:(id)a0;
+ (char)_setAudienceForSeedProgram:(long long)a0;
+ (char)_setCatalogForSeedProgram:(long long)a0;
+ (void)_setHelpFeedbackMenuEnabled:(char)a0;
+ (void)_setSeedOptOutUIDisabled:(char)a0;
+ (void)_setSeedProgramPref:(long long)a0;
+ (long long)currentSeedProgram;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (char)enrollInSeedProgram:(long long)a0;
+ (char)enrollInSeedProgram:(long long)a0 deletingSystemURL:(char)a1;
+ (char)fixUpAssetAudience;
+ (char)isEnrolledInSeedProgram;
+ (id)stringForSeedProgram:(long long)a0;
+ (char)unenrollFromSeedProgram;

@end
