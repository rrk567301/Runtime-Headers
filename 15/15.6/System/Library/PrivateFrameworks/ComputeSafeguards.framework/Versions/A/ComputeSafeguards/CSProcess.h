@class NSString, NSNumber, NSObject;
@protocol OS_dispatch_source;

@interface CSProcess : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *processExitMonitor;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) int currentPID;
@property (nonatomic) char exemptFromMitigations;
@property (nonatomic) unsigned long long cpu_fatal_cnt;
@property (nonatomic) unsigned long long cpu_nonfatal_cnt;
@property (nonatomic) unsigned long long exits_cnt;
@property (nonatomic) char needClearRestrictions;
@property (nonatomic) char resetNonFatalCPUMonitor;
@property (nonatomic) char cpuIsFatal;
@property (nonatomic) char cpuUsageLimitSet;
@property (retain, nonatomic) NSNumber *cpuThreshold;
@property (retain, nonatomic) NSNumber *cpuTimeWindow;
@property (nonatomic) unsigned long long issueType;
@property (nonatomic) unsigned long long mitigationType;
@property (nonatomic) unsigned long long mitigationReason;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (char)isRunning;
- (void)incrementCPUViolationCounter:(char)a0;
- (void)incrementExitCounter;
- (id)initWithIdentifier:(id)a0 andPID:(int)a1;
- (void)monitorForExit;
- (void)performCleanupOnExit;

@end
