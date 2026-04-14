@class NSMutableArray, NSArray, NSMutableDictionary, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface HUNearbyController : NSObject <IDSServiceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nearbyUpdatesQueue;
@property (copy, nonatomic) NSArray *availableDevices;
@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSMutableDictionary *domainQueues;
@property (retain, nonatomic) NSMutableArray *registeredDomains;
@property (retain, nonatomic) NSMutableDictionary *loggingUpdates;
@property (retain, nonatomic) NSMutableDictionary *messageUpdates;
@property (retain, nonatomic) NSMutableDictionary *discoveryUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)logMessage:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (id)nearbyDevices;
- (void)discoverNearbyDevicesWithDomain:(id)a0;
- (void)stopDiscoveringDevicesWithDomain:(id)a0;
- (id)nearbyDeviceWithIdentifier:(id)a0;
- (void)nearbyDevicesDidUpdateWithNewDevices:(id)a0 forDomain:(id)a1;
- (void)sendMessage:(id)a0 toDevicesWithDomain:(id)a1 withPriority:(unsigned long long)a2;
- (void)sendMessage:(id)a0 withDomain:(id)a1 toDevices:(id)a2 withPriority:(unsigned long long)a3;
- (void)registerBlock:(id)a0 forKey:(id)a1 withUpdateGroup:(id)a2 forDomain:(id)a3 withListener:(id)a4;
- (void)registerQueue:(id)a0 forDomain:(id)a1;
- (void)registerLoggingBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerDiscoveryBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;
- (void)registerMessageBlock:(id /* block */)a0 forDomain:(id)a1 withListener:(id)a2;

@end
