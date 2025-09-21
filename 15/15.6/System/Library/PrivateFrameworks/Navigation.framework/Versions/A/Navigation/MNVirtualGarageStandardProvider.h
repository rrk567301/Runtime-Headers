@class geo_isolater, NSString, NSTimer, NSObject, VGVirtualGarage;
@protocol MNVirtualGarageProviderDelegate, OS_dispatch_queue;

@interface MNVirtualGarageStandardProvider : NSObject <VGVirtualGarageObserver, MNVirtualGarageProvider> {
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSTimer *_forceUpdateTimer;
    double _forcePeriodicUpdateInterval;
    VGVirtualGarage *_garage;
    unsigned long long _vehiclesCount;
    char _assumesFullCharge;
    geo_isolater *_garageIsolater;
}

@property (weak, nonatomic) id<MNVirtualGarageProviderDelegate> virtualGarageDelegate;
@property (readonly, nonatomic) unsigned long long vehiclesCount;
@property (readonly, nonatomic) char assumesFullCharge;
@property (readonly, nonatomic) char isStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)updatedVehicleStateWithHandler:(id /* block */)a0;
- (void)_forceVirtualGarageSyncWithHandler:(id /* block */)a0;
- (id)_selectedVehicle;
- (void)_sendVirtualGarageUpdateForSelectedVehicle:(id)a0;
- (void)_setVirtualGarage:(id)a0;
- (void)_updateCachedPropertiesForGarage:(id)a0;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;

@end
