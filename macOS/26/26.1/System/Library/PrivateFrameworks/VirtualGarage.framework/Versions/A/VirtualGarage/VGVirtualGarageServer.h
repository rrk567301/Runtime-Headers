@class NSXPCListener, NSObject, NSString, GEOPerformanceEventLogger, NSMutableArray, VGVirtualGarage;
@protocol VGVirtualGarageObserver, OS_dispatch_queue, VGVirtualGaragePersisting;

@interface VGVirtualGarageServer : NSObject <NSXPCListenerDelegate, VGVirtualGarageDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions> {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id<VGVirtualGaragePersisting> _persister;
    GEOPerformanceEventLogger *_performanceEventLogger;
}

@property (nonatomic) BOOL hostsVirtualGarage;
@property (retain, nonatomic) VGVirtualGarage *garage;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableArray *activeConnections;
@property (weak, nonatomic) id<VGVirtualGarageObserver> observer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canUseVirtualGarageXPCService;
+ (id)sharedServer;

- (void)virtualGarageRemoveVehicle:(id)a0;
- (void)virtualGarageGetGarageWithReply:(id /* block */)a0;
- (void)_cleanUp;
- (void)virtualGarageEndContinuousUpdates;
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id /* block */)a0;
- (void)virtualGarageForceFetchAllVehicles;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)virtualGarageSetShouldUsePreferredNetworks:(BOOL)a0 forVehicle:(id)a1;
- (void)virtualGarageSaveVehicle:(id)a0;
- (void)virtualGarage:(id)a0 didUpdateUnpairedVehicles:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)stop;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;
- (void).cxx_destruct;
- (void)virtualGarageSelectVehicle:(id)a0;
- (void)virtualGarageOnboardVehicle:(id)a0;
- (void)startWithPersister:(id)a0;
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)a0 syncAcrossDevices:(BOOL)a1 withReply:(id /* block */)a2;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)virtualGarageSetAssumesFullCharge:(BOOL)a0;
- (void)_setupVirtualGarageHostingIfNeeded;
- (void)virtualGarageAddVehicle:(id)a0;
- (id)init;

@end
