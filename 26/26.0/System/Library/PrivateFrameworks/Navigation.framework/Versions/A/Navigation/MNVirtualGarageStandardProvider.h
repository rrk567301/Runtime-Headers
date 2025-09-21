@class VGVirtualGarage, NSString, geo_isolater, MNDispatchTimer, NSObject;
@protocol MNVirtualGarageProviderDelegate, OS_dispatch_queue;

@interface MNVirtualGarageStandardProvider : NSObject <VGVirtualGarageObserver, MNVirtualGarageProvider> {
    NSObject<OS_dispatch_queue> *_updateQueue;
    MNDispatchTimer *_forceUpdateTimer;
    double _forcePeriodicUpdateInterval;
    VGVirtualGarage *_garage;
    unsigned long long _vehiclesCount;
    BOOL _assumesFullCharge;
    geo_isolater *_garageIsolater;
}

@property (weak, nonatomic) id<MNVirtualGarageProviderDelegate> virtualGarageDelegate;
@property (readonly, nonatomic) unsigned long long vehiclesCount;
@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly, nonatomic) BOOL isStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)virtualGarageDidUpdate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updatedVehicleStateWithHandler:(id /* block */)a0;
- (void)_forceVirtualGarageSyncWithHandler:(id /* block */)a0;
- (id)_selectedVehicle;
- (void)_sendVirtualGarageUpdateForSelectedVehicle:(id)a0;
- (void)_setVirtualGarage:(id)a0;
- (void)_updateCachedPropertiesForGarage:(id)a0;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;

@end
