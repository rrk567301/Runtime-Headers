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
- (void)resetPredictedOutputDevice;
- (BOOL)isProxyGroupPlayer;
- (id)clusterComposition;
- (BOOL)isPickable;
- (id)groupUID;
- (id)routeUID;
- (BOOL)supportsGrouping;
- (long long)routeSubtype;
- (id)designatedGroupLeaderName;
- (BOOL)isAirPlayingToDevice;
- (id)groupLeaderAirplayIdentifier;
- (BOOL)isAppleTVRoute;
- (BOOL)isDeviceRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)supportsRemoteControl;
- (BOOL)isSplitterCapable;
- (BOOL)isSplitRoute;
- (long long)numberOfOutputDevices;
- (BOOL)isRoutingToWirelessDevice;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isStereoPair;
- (BOOL)isTVRoute;
- (BOOL)isPhoneRoute;
- (BOOL)isMacRoute;
- (BOOL)isLowLatencyRoute;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)isHomePodRoute;
- (BOOL)isB520Route;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isClusterRoute;
- (long long)originalRouteSubtype;
- (void)_endpointOutputDevicesDidChange:(id)a0;
- (void)_endpointPredictedOutputDeviceDidChange:(id)a0;
- (void)_endpointDidChange:(id)a0;
- (void)establishGroup;
- (id)effectiveGroupLeader;
- (BOOL)_groupLeaderIsOfDeviceSubtype:(unsigned int)a0;
- (unsigned long long)_outputDevicesComposition;

@end
