@class NSString, AFSiriAudioRoute, NSHashTable, AFDeviceRingerSwitchObserver, NSObject;
@protocol OS_dispatch_queue;

@interface AFSiriAudioRouteMonitor : NSObject <AFNotifyObserverDelegate, AFDeviceRingerSwitchListening> {
    NSString *_btAddress;
    NSString *_routeName;
    AFDeviceRingerSwitchObserver *_ringerSwitchObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_delegates;
    id /* block */ _pickedRoutesChangedBlock;
}

@property (retain, nonatomic) AFSiriAudioRoute *currentAudioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)addDelegate:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_fetchInitialState;
- (BOOL)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)a0;
- (void)removeDelegate:(id)a0;
- (void)_broadcastRouteChangeFrom:(id)a0 to:(id)a1;
- (void)_startMonitoringAudioRouteChanges;
- (void)_stopMonitoringAudioRouteChanges;
- (void)deviceRingerObserver:(id)a0 didChangeState:(long long)a1;
- (void)updateAudioRouteAvailability:(id)a0;

@end
