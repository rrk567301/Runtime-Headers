@class NSMutableDictionary;

@interface ARNetworkServiceCollection : NSObject {
    NSMutableDictionary *_deviceServiceKeyToServices;
    NSMutableDictionary *_deviceIDToKeys;
}

- (id)services;
- (void)removeService:(id)a0;
- (void)addService:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_enumerateServices:(id /* block */)a0;
- (id)_popServicesForServiceKey:(id)a0;
- (BOOL)containsService:(id)a0;
- (id)popConnectingServicesForDeviceID:(id)a0;
- (id)popServicesForAppConnection:(id)a0;
- (id)popServicesForNetworkingServiceName:(id)a0 forDeviceID:(id)a1;
- (id)servicesForAppConnection:(id)a0;
- (id)servicesForDeviceID:(id)a0;

@end
