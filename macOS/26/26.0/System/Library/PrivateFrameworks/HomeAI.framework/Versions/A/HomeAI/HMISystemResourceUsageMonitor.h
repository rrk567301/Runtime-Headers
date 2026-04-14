@class HMISystemResourceUsageMonitorImpl, HMISystemResourceUsage, NSObject;
@protocol OS_dispatch_queue, HMISystemResourceUsageMonitorDelegate;

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol>

@property (readonly) HMISystemResourceUsageMonitorImpl *systemResourceUsageMonitorImpl;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage;
@property (readonly) unsigned long long maxNumberOfAnalyzers;
@property (readonly) float maxAnalysisFPS;
@property (weak) id<HMISystemResourceUsageMonitorDelegate> delegate;

- (void)start;
- (id)getCurrentSystemResourceUsage;
- (id)init;
- (void).cxx_destruct;

@end
