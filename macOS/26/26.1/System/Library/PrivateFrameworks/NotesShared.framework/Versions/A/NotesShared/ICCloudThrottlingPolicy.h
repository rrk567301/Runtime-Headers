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

- (void)savePolicyState;
- (id)initWithThrottlingLevels:(id)a0 resetInterval:(double)a1;
- (void)resetPolicy;
- (void)loadSavedPolicyState;
- (void)changeLevelIfNecessary;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startPolicyResetTimer;
- (void)incrementBatchCount;
- (id)init;

@end
