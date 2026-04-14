@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)isEnrolledInSeedProgram;
+ (BOOL)unenrollFromSeedProgram;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (long long)currentSeedProgram;
+ (BOOL)fixUpAssetAudience;
+ (id)stringForSeedProgram:(long long)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (long long)_seedProgramForString:(id)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)_currentCatalogIsSeed;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)_canEnrollInBetaSoftware;
+ (void)_setSeedProgramPref:(long long)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (void)_createFeedbackAssistantSymlink;
+ (void)_clearSeedCatalog;
+ (void)_clearAudience;
+ (id)_loadSeedCatalogsFromPlist;
+ (id)_loadSeedAudiencesFromPlist;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;

@end
