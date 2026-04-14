@class MPAVOutputDeviceRoute, NSString, MPAVRouteConnection, MPMRAVEndpointWrapper, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_sortName;
}

@property (retain, nonatomic) MPAVRouteConnection *connection;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *predictedOutputDevice;
@property (readonly, nonatomic) void *endpoint;
@property (readonly, nonatomic) MRAVEndpoint *endpointObject;
@property (retain, nonatomic) MPMRAVEndpointWrapper *endpointWrapper;
@property (readonly, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL canModifyGroupMembership;

+ (BOOL)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;

- (void)resetPredictedOutputDevice;
- (id)designatedGroupLeaderName;
- (BOOL)isPickable;
- (BOOL)isProxyGroupPlayer;
- (void)dealloc;
- (id)groupUID;
- (id)clusterComposition;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canAccessRemoteAssets;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEndpoint:(void *)a0;
- (id)routeUID;
- (id)description;
- (BOOL)canFetchMediaDataFromSender;
- (long long)clusterType;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)productIdentifier;
- (long long)routeType;
- (id)routeName;
- (id)routeNames;
- (BOOL)supportsGrouping;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (void)_endpointPredictedOutputDeviceDidChange:(id)a0;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;
- (id)designatedGroupLeaderRouteUID;
- (id)effectiveGroupLeader;
- (void)establishGroup;
- (id)groupLeaderAirplayIdentifier;
- (id)initWithEndpointObject:(id)a0;
- (BOOL)isAirPlayingToDevice;
- (BOOL)isAppleTVRoute;
- (BOOL)isB520Route;
- (BOOL)isClusterRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isLowLatencyRoute;
- (BOOL)isMacRoute;
- (BOOL)isPhoneRoute;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isSplitRoute;
- (BOOL)isSplitterCapable;
- (BOOL)isStereoPair;
- (BOOL)isTVRoute;
- (long long)numberOfOutputDevices;
- (long long)originalRouteSubtype;
- (long long)routeSubtype;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)supportsRemoteControl;

@end
