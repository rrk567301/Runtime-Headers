@class GEOObserverHashTable, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface GEOSystemMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    geo_isolater *_isolater;
    GEOObserverHashTable *_powerAdapterObservers;
    GEOObserverHashTable *_chargingOnlyBatteryObservers;
    GEOObserverHashTable *_batteryObservers;
    int _powerAdapterNotifyToken;
    int _batteryPercentNotifyToken;
    BOOL _powerPluggedIn;
    unsigned long long _batteryLevel;
}

@property (class, readonly, nonatomic) GEOSystemMonitor *sharedInstance;

@property (readonly, nonatomic, getter=isPowerAdapterConnected) BOOL powerAdapterConnected;
@property (readonly, nonatomic) unsigned long long batteryLevel;

- (void)removeBatteryLevelObserver:(id)a0;
- (void)dealloc;
- (void)addBatteryLevelObserver:(id)a0 onlyWhenCharging:(BOOL)a1 queue:(id)a2;
- (id)init;
- (void)addPowerAdapterObserver:(id)a0 queue:(id)a1;
- (void)removePowerAdapterObserver:(id)a0;
- (void).cxx_destruct;

@end
