@class CWFScanResult, NSMutableArray;

@interface CWFNetworkDenyListItem : NSObject {
    NSMutableArray *_denyListMetrics;
}

@property (retain) CWFScanResult *scanResultForNetworkDenyListItem;
@property (retain) NSMutableArray *denyListTriggers;
@property (retain) NSMutableArray *statesCurrent;
@property (retain) NSMutableArray *statesHistory;
@property char enterprisePolicy;

- (void)dealloc;
- (void).cxx_destruct;
- (void)processDenyListStateMetric:(id)a0 denyListRemove:(char)a1 denyListRemoveReason:(unsigned long long)a2;
- (id)_copyCreateDenyListState:(unsigned long long)a0 reason:(unsigned long long)a1 reasonData:(long long)a2;
- (void)addDenyListState:(unsigned long long)a0 reason:(unsigned long long)a1 reasonData:(long long)a2;
- (void)addDenyListStateHistory:(id)a0 state:(unsigned long long)a1 reason:(unsigned long long)a2 reasonData:(long long)a3;
- (void)addDenyListTrigger:(unsigned long long)a0 reasonData:(long long)a1 BSSID:(id)a2;
- (char)containsNetwork:(id)a0;
- (char)hasDenyListState:(unsigned long long)a0;
- (id)initWithDenyListNetwork:(id)a0;
- (char)isEqualToDenyListScanResult:(id)a0;
- (void)processDenyListedBSSForMetrics;
- (char)updateNetwork:(id)a0;

@end
