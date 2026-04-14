@class NSString, NSTimer, NSObject, VGVirtualGarage;
@protocol MNVirtualGarageProviderDelegate, OS_dispatch_queue;

@interface MNVirtualGarageStandardProvider : NSObject <VGVirtualGarageObserver, MNVirtualGarageProvider> {
    BOOL _isStarted;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSTimer *_forceUpdateTimer;
    double _forcePeriodicUpdateInterval;
    VGVirtualGarage *_garage;
}

@property (weak, nonatomic) id<MNVirtualGarageProviderDelegate> virtualGarageDelegate;
@property (readonly, nonatomic) unsigned long long vehiclesCount;
@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)virtualGarageDidUpdate:(id)a0;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;
- (void)updatedVehicleStateWithHandler:(id /* block */)a0;
- (void)_forceVirtualGarageSyncWithHandler:(id /* block */)a0;
- (void)_sendVirtualGarageUpdateForSelectedVehicle:(id)a0;

@end
