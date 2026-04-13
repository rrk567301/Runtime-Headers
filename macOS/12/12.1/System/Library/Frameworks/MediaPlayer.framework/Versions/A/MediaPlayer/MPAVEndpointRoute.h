@class NSString, MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) void *endpoint;
@property (readonly, nonatomic) MRAVEndpoint *endpointObject;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;

+ (BOOL)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEndpoint:(void *)a0;
- (long long)routeType;
- (long long)clusterType;
- (id)routeNames;
- (id)routeName;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)clusterComposition;
- (BOOL)isProxyGroupPlayer;
- (id)groupUID;
- (BOOL)supportsGrouping;
- (id)routeUID;
- (long long)routeSubtype;
- (BOOL)isSplitRoute;
- (long long)numberOfOutputDevices;
- (long long)originalRouteSubtype;
- (id)designatedGroupLeaderName;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isDeviceRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)supportsRemoteControl;
- (id)groupLeaderAirplayIdentifier;
- (BOOL)isAirPlayingToDevice;
- (BOOL)isAppleTVRoute;
- (BOOL)isSplitterCapable;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isStereoPair;
- (BOOL)isTVRoute;
- (BOOL)isPhoneRoute;
- (BOOL)isMacRoute;
- (BOOL)isLowLatencyRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isB520Route;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isClusterRoute;
- (void)establishGroup;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (id)effectiveGroupLeader;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;

@end
