@class CBPeripheralManager, NSUUID, NSDictionary, NSString, NSObject, WPAdvertisingRequest;
@protocol OS_dispatch_queue;

@interface WPDObjectDiscoveryManager : WPDManager <CBPeripheralManagerDelegate, WPDObjectDiscoveryAdvertiser>

@property (readonly, weak) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) CBPeripheralManager *peripheralManager;
@property BOOL advertising;
@property (retain) WPAdvertisingRequest *advertRequest;
@property (weak) NSUUID *advertClientUUID;
@property (retain) NSDictionary *advertOptions;
@property unsigned long long advertHash;
@property (readonly, nonatomic) BOOL advAllowlisted;
@property (readonly) BOOL scanning;
@property BOOL scanningDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServer:(id)a0;
- (void)cleanup;
- (void)peripheralManager:(id)a0 didStopAdvertisingWithError:(id)a1;
- (void)update;
- (id)addAdvertisingRequest:(id)a0 forClient:(id)a1;
- (void)removeAdvertisingRequestsForClient:(id)a0;
- (BOOL)advertOptionsChanged:(id)a0;
- (void)resetAdvertiser;
- (void).cxx_destruct;
- (id)removeAdvertisingRequest:(id)a0 forClient:(id)a1;
- (BOOL)updateAdvertisingOptionsWithError:(id *)a0;
- (id)generateStateDumpStrings;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)startAdvertiser;
- (id)updateAdvertiser;
- (void)stopAdvertiser;

@end
