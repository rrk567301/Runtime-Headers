@class NSDictionary;

@interface SDSeedProgramManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *currentEnrollmentMetadata;
@property (class, readonly, nonatomic) BOOL canFileFeedback;

+ (BOOL)isEnrolledInSeedProgram;
+ (BOOL)unenrollFromSeedProgram;
+ (void)_createFeedbackAssistantSymlink;
+ (BOOL)_canEnrollInBetaSoftware;
+ (void)_clearAudience;
+ (void)_clearSeedCatalog;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)_currentCatalogIsSeed;
+ (id)_loadSeedAudiencesFromPlist;
+ (id)_loadSeedCatalogsFromPlist;
+ (long long)_seedProgramForString:(id)a0;
+ (BOOL)_setAudienceForSeedProgram:(long long)a0;
+ (BOOL)_setCatalogForSeedProgram:(long long)a0;
+ (void)_setHelpFeedbackMenuEnabled:(BOOL)a0;
+ (void)_setSeedOptOutUIDisabled:(BOOL)a0;
+ (void)_setSeedProgramPref:(long long)a0;
+ (long long)currentSeedProgram;
+ (long long)currentSeedProgramForDiskAtPath:(id)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0;
+ (BOOL)enrollInSeedProgram:(long long)a0 deletingSystemURL:(BOOL)a1;
+ (BOOL)fixUpAssetAudience;
+ (id)stringForSeedProgram:(long long)a0;

@end
