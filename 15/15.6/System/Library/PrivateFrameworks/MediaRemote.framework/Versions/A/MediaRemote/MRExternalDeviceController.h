@class NSString, NSNetServiceBrowser, NSMutableSet, NSObject;
@protocol MRExternalDeviceControllerDelegate, OS_dispatch_queue;

@interface MRExternalDeviceController : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableSet *_discoveredDevices;
    NSMutableSet *_resolvingServices;
    NSMutableSet *_monitoringServices;
}

@property (weak, nonatomic) id<MRExternalDeviceControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *bonjourServiceType;
@property (readonly, nonatomic, getter=isDiscovering) char discovering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalDeviceClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(char)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(char)a2;
- (void)netServiceDidResolveAddress:(id)a0;
- (char)_isManagedConfigIDAllowed:(id)a0;
- (void)beginDiscovery;
- (void)endDiscovery;
- (id)initWithBonjourServiceType:(id)a0;

@end
