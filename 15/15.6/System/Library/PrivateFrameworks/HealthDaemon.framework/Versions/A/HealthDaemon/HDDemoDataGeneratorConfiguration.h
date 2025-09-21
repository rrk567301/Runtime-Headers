@interface HDDemoDataGeneratorConfiguration : NSObject

@property (nonatomic) long long profileType;
@property (nonatomic) long long generationPeriodInDays;
@property (nonatomic) char highFidelityGeneration;
@property (nonatomic) char shouldPresentNotifications;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long sampleTrackingType;
@property (nonatomic) long long nutritionTrackingType;
@property (nonatomic) long long resultsTrackingType;
@property (nonatomic) char shouldGenerateHealthDocuments;
@property (nonatomic) char shouldGenerateMedicalID;
@property (nonatomic) char shouldEnsureRecentWorkoutHasRoute;
@property (nonatomic) char shouldGenerateRecentLiquidsIntake;
@property (nonatomic) char shouldGenerateLoudHeadphoneData;

+ (id)configurationFromDefaults:(id)a0;

- (id)init;
- (void)configureForProfileType:(long long)a0;
- (void)persistToDefaults:(id)a0;

@end
