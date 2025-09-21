@class HKDarwinNotificationDataSource, HKNanoRegistryPairingAndSwitchingNotificationDataSource;

@interface HKWatchLowPowerModeDataSource : HKObserverBridge

@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource;

- (BOOL)isWatchLowPowerModeEnabled;
- (void)unregisterObserver:(id)a0;
- (id)initWithCarouselDomainAccessor:(id)a0;
- (id)initWithDarwinNotificationDataSource:(id)a0 devicePairingAndSwitchingNotificationDataSource:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)init;
- (void)registerObserver:(id)a0 onLowPowerModeChange:(id /* block */)a1;
- (id)initWithDarwinNotificationDataSource:(id)a0 devicePairingAndSwitchingNotificationDataSource:(id)a1 carouselDomainAccessor:(id)a2;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void).cxx_destruct;

@end
