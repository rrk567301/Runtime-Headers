@class NSString, CHSChronoServicesConnection, NSMutableDictionary;

@interface CHSRemoteDeviceService : NSObject <CHSChronoServicesConnectionClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CHSChronoServicesConnection *_connection;
    NSMutableDictionary *_lock_monitors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)remoteWidgetsEnabled;
- (BOOL)reloadRemoteWidgetsWithError:(id *)a0;
- (BOOL)unpairDevice:(id)a0 error:(id *)a1;
- (id)initWithConnection:(id)a0;
- (id)init;
- (BOOL)toggleRemoteWidgetsEnabled:(BOOL)a0 error:(id *)a1;
- (id)allPairedDevices;
- (void)pairDevice:(id)a0 completion:(id /* block */)a1;
- (void)nearbyDevicesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)browseNearbyDevicesWithHandler:(id /* block */)a0 error:(id *)a1;

@end
