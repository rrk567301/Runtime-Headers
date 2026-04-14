@class HMDUnassociatedAppleMediaAccessory, NSString, NSArray, HMDHomeManager, HMFTimer, NSMutableSet, NSObject, NSMapTable;
@protocol HMDMediaBrowserDataSource, HMDMRAVRoutingDiscoverySession, OS_dispatch_queue, HMDMediaBrowserDelegate;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HAP2AccessoryServerDiscoveryDelegate, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_accessoryAdvertisements;
    NSMapTable *_currentBrowseOperations;
    BOOL _discoverUnassociatedAccessories;
    BOOL _updateAvailableOutputDevices;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
    NSMutableSet *_mediaEndpoints;
    id<HMDMediaBrowserDataSource> _dataSource;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) id<HMDMRAVRoutingDiscoverySession> discoverySession;
@property (retain, nonatomic) id discoverySessionCallbackToken;
@property (weak) id<HMDMediaBrowserDelegate> delegate;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, copy) HMDUnassociatedAppleMediaAccessory *currentAccessory;
@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)advertisementsFromOutputDevices:(id)a0;

- (id)initWithHomeManager:(id)a0;
- (void)updateSessionsForAccessories:(id)a0;
- (id)shortDescription;
- (id)initWithHomeManager:(id)a0 dataSource:(id)a1;
- (void)timerDidFire:(id)a0;
- (void)deregisterAccessories:(id)a0;
- (void)discovery:(id)a0 didStopDiscoveringWithError:(id)a1;
- (void)discovery:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void)registerAccessories:(id)a0;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (id)unassociatedAccessoryFromAdvertisementData:(id)a0;
- (id)dumpDescription;
- (void).cxx_destruct;
- (void)dealloc;
- (void)discovery:(id)a0 didDiscoverAccessory:(id)a1;
- (void)stopDiscoveringAssociatedAccessoriesViaBonjour;
- (void)startDiscoveringAssociatedAccessoriesViaBonjour;
- (void)discovery:(id)a0 didLoseAccessory:(id)a1 error:(id)a2;

@end
