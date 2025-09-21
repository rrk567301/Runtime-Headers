@class NSString, NSArray, MRAVOutputDevice;

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_roomRoutes;
    NSArray *_clusterMemberRoutes;
    NSArray *_clusterCompositionMembers;
}

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic, getter=isPhoneLocalRoute) char phoneLocalRoute;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) char groupLeader;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic) NSArray *roomRoutes;
@property (readonly, nonatomic) NSArray *clusterMemberRoutes;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)productIdentifier;
- (long long)routeType;
- (char)isNearby;
- (char)isKnown;
- (long long)clusterType;
- (id)routeName;
- (char)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (char)supportsHeadTrackedSpatialAudio;
- (char)canAccessRemoteAssets;
- (char)canFetchMediaDataFromSender;
- (char)canPlayEncryptedProgressiveDownloadAssets;
- (char)isAppleAccessory;
- (id)clusterComposition;
- (id)groupUID;
- (id)initWithOutputDevices:(id)a0;
- (char)isPickable;
- (char)isPickedOnPairedDevice;
- (char)isProxyGroupPlayer;
- (char)isVolumeControlAvailable;
- (id)playingPairedDeviceName;
- (id)routeUID;
- (char)supportsGrouping;
- (char)_anyOutputDeviceObjPassesTest:(id /* block */)a0;
- (char)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (char)_anyOutputDevicePassesTest:(id /* block */)a0;
- (id)clusterCompositionRoutes;
- (id)designatedGroupLeaderRouteUID;
- (char)headTrackedSpatialAudioEnabled;
- (id)initWithOutputDevices:(id)a0 parentRoute:(id)a1;
- (char)isAirPlayRoute;
- (char)isAppleTVRoute;
- (char)isB520Route;
- (char)isCarplayRoute;
- (char)isClusterRoute;
- (char)isDeviceRoute;
- (char)isDeviceSpeakerPhoneRoute;
- (char)isDeviceSpeakerRoute;
- (char)isHomePodRoute;
- (char)isHomeTheaterRoute;
- (char)isLowFidelityRoute;
- (char)isLowLatencyRoute;
- (char)isMacRoute;
- (char)isPhoneRoute;
- (char)isPicked;
- (char)isSplitterCapable;
- (char)isStereoPair;
- (long long)originalRouteSubtype;
- (long long)pickableRouteType;
- (char)requiresPassword;
- (long long)routeSubtype;
- (id)subRoutes;
- (char)supportsAirPlayGrouping;
- (char)supportsWirelessDisplay;

@end
