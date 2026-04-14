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

+ (void)resetSavedPolicyState;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)incrementBatchCount;
- (id)initWithThrottlingLevels:(id)a0 resetInterval:(double)a1;
- (void)loadSavedPolicyState;
- (void)resetPolicy;
- (void)startPolicyResetTimer;
- (void)changeLevelIfNecessary;
- (void)savePolicyState;

@end
