@class NSNumber, NSString;

@interface CSCPUTimeRestriction : NSObject <CSRestriction>

@property (readonly, nonatomic) NSNumber *cpuThreshold;
@property (readonly, nonatomic) NSNumber *timeWindow;
@property (readonly, nonatomic) BOOL fatalMitigation;
@property long long maxNumberOfKills;
@property long long maxNumberOfNonfatal;
@property long long enableLimitCPUUsage;
@property long long globalOverrideLimitCPUPercentage;
@property long long globalOverrideCPUPercentage;
@property long long globalOverrideCPUTimeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)getProperties;
- (char)applyToProcess:(id)a0;
- (id)initWithThreshold:(id)a0 andTimeWindow:(id)a1;
- (id)initWithThreshold:(id)a0 andTimeWindow:(id)a1 andFatal:(char)a2;
- (int)leniencyScore;
- (char)releaseForProcess:(id)a0;
- (char)shouldBeFatalOnViolation;

@end
