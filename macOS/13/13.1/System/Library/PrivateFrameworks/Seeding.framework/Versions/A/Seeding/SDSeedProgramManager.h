@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)isEnrolledInSeedProgram;
+ (BOOL)unenrollFromSeedProgram;
+ (long long)currentSeedProgram;
+ (void)_setSeedProgramPref:(long long)a0;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (id)_loadSeedCatalogsFromPlist;
+ (id)_loadSeedAudiencesFromPlist;
+ (BOOL)_currentCatalogIsSeed;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (BOOL)fixUpAssetAudience;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (void)_clearSeedCatalog;
+ (void)_clearAudience;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (void)_createFeedbackAssistantSymlink;
+ (BOOL)_canEnrollInBetaSoftware;
+ (long long)_seedProgramForString:(id)a0;
+ (id)stringForSeedProgram:(long long)a0;

@end
