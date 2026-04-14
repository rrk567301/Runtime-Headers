@interface HMDAppleMediaAccessorySensorManagerLocalDataStore : NSObject <HMDAppleMediaAccessorySensorManagerDataStore>

- (void)saveSensorUUID:(id)a0;
- (void)saveSensorUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSensorUUIDWithCompletion:(id /* block */)a0;

@end
