@class NSString, NSXPCConnection, NSHashTable, GEOObserverHashTable, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface VGVirtualGarageService : NSObject <VGVirtualGarageObserver, VGVirtualGarageActions> {
    NSHashTable *_clients;
    geo_isolater *_clientsIsolater;
    GEOObserverHashTable *_observers;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSString *activeVehicleIdentifier;

+ (BOOL)canUseVirtualGarageXPCService;
+ (id)sharedService;

- (void)unregisterObserver:(id)a0;
- (void)virtualGarageSetAssumesFullCharge:(BOOL)a0;
- (void)virtualGarage:(id)a0 didUpdateUnpairedVehicles:(id)a1;
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)a0 syncAcrossDevices:(BOOL)a1 withReply:(id /* block */)a2;
- (void)virtualGarageGetGarageWithReply:(id /* block */)a0;
- (void)openForClient:(id)a0;
- (void)virtualGarageOnboardVehicle:(id)a0;
- (void)closeForClient:(id)a0;
- (void)virtualGarageSelectVehicle:(id)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)virtualGarageAddVehicle:(id)a0;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;
- (void)virtualGarageSaveVehicle:(id)a0;
- (void)virtualGarageSetShouldUsePreferredNetworks:(BOOL)a0 forVehicle:(id)a1;
- (void)virtualGarageEndContinuousUpdates;
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id /* block */)a0;
- (void)_openConnection;
- (void)virtualGarageRemoveVehicle:(id)a0;
- (void)_closeConnection;
- (id)init;
- (void)virtualGarageForceFetchAllVehicles;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)_clearActiveVehicleIdentifierIfNeeded:(id)a0;
- (id)messageTargetWithErrorReply:(id /* block */)a0;

@end
