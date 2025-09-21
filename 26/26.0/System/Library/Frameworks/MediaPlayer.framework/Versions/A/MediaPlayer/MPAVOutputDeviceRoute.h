@class NSString, NSArray, MRAVOutputDevice;

@interface MPAVOutputDeviceRoute : MPAVRoute {
    NSArray *_roomRoutes;
    NSArray *_clusterMemberRoutes;
    NSArray *_clusterCompositionMembers;
}

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic, getter=isPhoneLocalRoute) BOOL phoneLocalRoute;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;
@property (readonly, nonatomic) NSArray *dnsNames;
@property (readonly, nonatomic) NSArray *roomRoutes;
@property (readonly, nonatomic) NSArray *clusterMemberRoutes;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

- (id)playingPairedDeviceName;
- (BOOL)isPickedOnPairedDevice;
- (BOOL)isPickable;
- (BOOL)isProxyGroupPlayer;
- (id)groupUID;
- (BOOL)isVolumeControlAvailable;
- (id)clusterComposition;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canAccessRemoteAssets;
- (BOOL)isKnown;
- (id)routeUID;
- (id)description;
- (BOOL)canFetchMediaDataFromSender;
- (long long)clusterType;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (BOOL)requiresPassword;
- (BOOL)isAppleAccessory;
- (void).cxx_destruct;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)productIdentifier;
- (long long)routeType;
- (BOOL)isNearby;
- (id)routeName;
- (id)initWithOutputDevices:(id)a0;
- (BOOL)supportsGrouping;
- (BOOL)_anyOutputDeviceObjPassesTest:(id /* block */)a0;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;
- (id)clusterCompositionRoutes;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)headTrackedSpatialAudioEnabled;
- (id)initWithOutputDevices:(id)a0 parentRoute:(id)a1;
- (BOOL)isAirPlayRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)isB520Route;
- (BOOL)isCarplayRoute;
- (BOOL)isClusterRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isDeviceSpeakerPhoneRoute;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isLowLatencyRoute;
- (BOOL)isMacRoute;
- (BOOL)isPhoneRoute;
- (BOOL)isPicked;
- (BOOL)isSplitterCapable;
- (BOOL)isStereoPair;
- (long long)originalRouteSubtype;
- (long long)pickableRouteType;
- (long long)routeSubtype;
- (id)subRoutes;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)supportsWirelessDisplay;

@end
