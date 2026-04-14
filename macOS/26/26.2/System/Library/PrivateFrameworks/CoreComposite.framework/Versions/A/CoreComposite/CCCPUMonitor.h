@class NSMutableDictionary;

@interface CCCPUMonitor : NSObject {
    NSMutableDictionary *_workloads;
}

+ (id)comparativeSummaryForMonitor:(id)a0 label:(id)a1 otherMonitor:(id)a2 otherLabel:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)monitorWorkload:(id /* block */)a0 withLabel:(id)a1;
- (id)workloadForLabel:(id)a0;
- (id)workloadLabels;

@end
