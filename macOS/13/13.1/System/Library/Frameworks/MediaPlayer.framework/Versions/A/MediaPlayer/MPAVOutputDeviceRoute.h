@class NSString, NSArray, MRAVOutputDevice;

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_clusterMembers;
    NSArray *_clusterCompositionMembers;
}

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic, getter=isPhoneLocalRoute) BOOL phoneLocalRoute;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic) NSArray *clusterMembers;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)productIdentifier;
- (long long)routeType;
- (BOOL)isNearby;
- (BOOL)isKnown;
- (long long)clusterType;
- (id)routeName;
- (BOOL)isAppleAccessory;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isVolumeControlAvailable;
- (id)initWithOutputDevices:(id)a0;
- (id)clusterComposition;
- (BOOL)isPickable;
- (id)playingPairedDeviceName;
- (BOOL)isPickedOnPairedDevice;
- (id)groupUID;
- (id)routeUID;
- (BOOL)supportsGrouping;
- (long long)routeSubtype;
- (BOOL)isAppleTVRoute;
- (BOOL)isDeviceRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)isSplitterCapable;
- (BOOL)isPicked;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isStereoPair;
- (BOOL)isPhoneRoute;
- (BOOL)isMacRoute;
- (BOOL)isAirPlayRoute;
- (BOOL)headTrackedSpatialAudioEnabled;
- (BOOL)isLowLatencyRoute;
- (BOOL)supportsWirelessDisplay;
- (id)designatedGroupLeaderRouteUID;
- (long long)pickableRouteType;
- (id)subRoutes;
- (id)clusterCompositionRoutes;
- (BOOL)requiresPassword;
- (BOOL)isCarplayRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isB520Route;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isClusterRoute;
- (long long)originalRouteSubtype;
- (id)initWithOutputDevices:(id)a0 parentRoute:(id)a1;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;

@end
