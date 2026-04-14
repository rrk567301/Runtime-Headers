@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeperImplementation : NSObject

@property (retain, nonatomic) NSMutableDictionary *zoneIDsToGateHolders;
@property (retain, nonatomic) NSMutableArray *waiterWrappers;

- (id)CKStatusReportArray;
- (id)init;
- (void).cxx_destruct;
- (void)relinquishLocksForWaiter:(id)a0 deferRelinquish:(BOOL)a1;
- (void)registerWaiter:(id)a0 forZoneIDs:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasStatusToReport;

@end
