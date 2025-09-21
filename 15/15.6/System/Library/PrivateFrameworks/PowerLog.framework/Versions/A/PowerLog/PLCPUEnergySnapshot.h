@class NSMutableDictionary;

@interface PLCPUEnergySnapshot : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *coalitionIDToCoalitionNameMapping;
@property (class, retain, nonatomic) NSMutableDictionary *identifierToAccountingName;
@property (class, retain, nonatomic) NSMutableDictionary *identifierToCoalitionID;

@property unsigned long long cpuEnergy;
@property unsigned long long cpuEnergyBilledToMe;
@property unsigned long long cpuEnergyBilledToOthers;
@property (retain) NSMutableDictionary *mockData;

- (id)description;
- (char)isValid;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andMockData:(id)a1;
- (double)computeEnergyDiff:(id)a0;
- (double)computeEnergyDiffUntilNow:(id)a0 andAdjustSnapshotToNow:(char)a1;
- (id)getCoalitionIDForIdentifier:(id)a0;
- (void)refreshCoalitionIDMapping;
- (id)searchCoalitionsCacheForID:(id)a0;
- (char)snapshotCPUEnergy:(id)a0;

@end
