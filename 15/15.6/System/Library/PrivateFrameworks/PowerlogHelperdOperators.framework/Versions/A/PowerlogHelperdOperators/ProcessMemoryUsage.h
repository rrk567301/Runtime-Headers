@class NSString;

@interface ProcessMemoryUsage : NSObject

@property char isDaemonXPCService;
@property (retain) NSString *processName;
@property (retain) NSString *bundleId;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *processLaunchdName;
@property unsigned long long phys_footprint_size;
@property unsigned long long peak_phys_footprint;
@property unsigned long long interval_peak_phys_footprint;
@property unsigned long long neural_footprint;
@property unsigned long long interval_peak_neural_footprint;
@property int jetsam_priority;
@property unsigned long long timeAtPriorityMATU;
@property char process_active;
@property int memoryLimitMB;
@property char isLimitHard;
@property char isActiveLimit;
@property char isLimitIncreased;

- (void).cxx_destruct;

@end
