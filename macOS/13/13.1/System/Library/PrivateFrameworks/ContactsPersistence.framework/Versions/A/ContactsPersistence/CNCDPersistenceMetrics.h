@interface CNCDPersistenceMetrics : NSObject

+ (void)sendZeroStores;
+ (void)sendDidRepairPSCWithCountBefore:(unsigned long long)a0 countAfter:(unsigned long long)a1;
+ (void)sendDidCreatePSCWithCountOfStores:(unsigned long long)a0 countOfAccounts:(unsigned long long)a1;
+ (void)sendDidUpdatePSCByCountOfAddedStores:(unsigned long long)a0 countOfRemovedStores:(unsigned long long)a1;

@end
