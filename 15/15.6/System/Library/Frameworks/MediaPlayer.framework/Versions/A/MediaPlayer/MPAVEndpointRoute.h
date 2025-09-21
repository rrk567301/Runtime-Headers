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
@property (readonly, nonatomic) char canModifyGroupMembership;

+ (char)supportsSecureCoding;
+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(void *)a0;
- (id)productIdentifier;
- (long long)routeType;
- (long long)clusterType;
- (id)routeName;
- (id)routeNames;
- (char)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (char)canAccessRemoteAssets;
- (char)canFetchMediaDataFromSender;
- (char)canPlayEncryptedProgressiveDownloadAssets;
- (void)resetPredictedOutputDevice;
- (id)clusterComposition;
- (id)groupUID;
- (char)isPickable;
- (char)isProxyGroupPlayer;
- (id)routeUID;
- (char)supportsGrouping;
- (void)_endpointDidChange:(id)a0;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (void)_endpointPredictedOutputDeviceDidChange:(id)a0;
- (char)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;
- (id)designatedGroupLeaderName;
- (id)designatedGroupLeaderRouteUID;
- (id)effectiveGroupLeader;
- (void)establishGroup;
- (id)groupLeaderAirplayIdentifier;
- (id)initWithEndpointObject:(id)a0;
- (char)isAirPlayingToDevice;
- (char)isAppleTVRoute;
- (char)isB520Route;
- (char)isClusterRoute;
- (char)isDeviceRoute;
- (char)isDeviceSpeakerRoute;
- (char)isHomePodRoute;
- (char)isHomeTheaterRoute;
- (char)isLowFidelityRoute;
- (char)isLowLatencyRoute;
- (char)isMacRoute;
- (char)isPhoneRoute;
- (char)isRoutingToWirelessDevice;
- (char)isSplitRoute;
- (char)isSplitterCapable;
- (char)isStereoPair;
- (char)isTVRoute;
- (long long)numberOfOutputDevices;
- (long long)originalRouteSubtype;
- (long long)routeSubtype;
- (char)supportsAirPlayGrouping;
- (char)supportsRemoteControl;

@end
