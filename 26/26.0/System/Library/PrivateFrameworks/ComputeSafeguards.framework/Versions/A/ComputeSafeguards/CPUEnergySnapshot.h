@class NSDate;

@interface CPUEnergySnapshot : NSObject

@property unsigned long long cpuEnergy;
@property unsigned long long cpuEnergyBilledToMe;
@property unsigned long long cpuEnergyBilledToOthers;
@property (retain) NSDate *time;

+ (id)snapshotCPUEnergy:(unsigned long long)a0;

- (double)computeEnergyDiff:(id)a0;
- (void).cxx_destruct;

@end
