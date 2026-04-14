@class NSArray, NSTimer, NSDate, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject

@property (nonatomic) unsigned long long currentBatchCount;
@property (retain, nonatomic) NSArray *throttlingLevels;
@property (nonatomic) unsigned long long currentLevelIndex;
@property (readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property double resetInterval;
@property (retain) NSDate *policyStartDate;
@property (retain) NSTimer *policyResetTimer;
@property (readonly, nonatomic) double batchInterval;
@property (readonly, nonatomic) double maximumBatchIntervalFactor;

+ (void)resetSavedPolicyState;

- (void)incrementBatchCount;
- (void)dealloc;
- (id)init;
- (void)loadSavedPolicyState;
- (id)initWithThrottlingLevels:(id)a0 resetInterval:(double)a1;
- (void)changeLevelIfNecessary;
- (void)resetPolicy;
- (void)savePolicyState;
- (void)startPolicyResetTimer;
- (void).cxx_destruct;

@end
