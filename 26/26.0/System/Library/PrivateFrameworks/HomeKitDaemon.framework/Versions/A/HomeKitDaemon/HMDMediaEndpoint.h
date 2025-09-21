@class NSString, MRExternalDevice, HMDMediaBrowser, NSSet, MRAVEndpoint, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMediaEndpoint : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) MRAVEndpoint *retainedEndpoint;
@property (readonly, nonatomic) MRExternalDevice *externalDevice;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSSet *outputDeviceIdentifiers;
@property (nonatomic) unsigned int connectionState;
@property (retain, nonatomic) NSMutableArray *pendingBlocks;
@property (readonly, nonatomic) NSString *logID;
@property (weak) HMDMediaBrowser *browser;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSArray *advertisements;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)initWithEndpoint:(id)a0;
- (BOOL)isEqualToEndpoint:(id)a0;
- (id)logIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateWithEndpoint:(id)a0;
- (void)setPlaybackState:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)_connectWithCompletionHandler:(id /* block */)a0;
- (void)_getPlaybackStateWithCompletionHandler:(id /* block */)a0;
- (void)_notifyPendingBlocksOfError:(id)a0;
- (void)_setPlaybackState:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)_updateOutputDeviceIdentifiers;
- (void)_updateOutputDevicesAndConnectWithCompletionHandler:(id /* block */)a0;
- (id)copyOrigin;
- (void)disconnectFromEndpoint:(id)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (BOOL)doesContainAnyAccessory:(id)a0;
- (void)getPlaybackStateWithCompletionHandler:(id /* block */)a0;
- (void)registerForNowPlayingUpdates:(BOOL)a0;
- (void)setRetainedEndpoint:(id)a0;
- (void)updateOutputDevicesAndConnectWithCompletionHandler:(id /* block */)a0;

@end
