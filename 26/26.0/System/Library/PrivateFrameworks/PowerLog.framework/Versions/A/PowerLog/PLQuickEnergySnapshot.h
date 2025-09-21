@class NSDate;

@interface PLQuickEnergySnapshot : NSObject

@property (retain) NSDate *timestamp;
@property double cpuEnergy;
@property double networkEnergy;

- (double)computeEnergyDiff:(id)a0;
- (id)initWithEnergies:(double)a0 andNetworkEnergy:(double)a1;
- (double)getTotalEnergy;
- (id)description;
- (void).cxx_destruct;

@end
