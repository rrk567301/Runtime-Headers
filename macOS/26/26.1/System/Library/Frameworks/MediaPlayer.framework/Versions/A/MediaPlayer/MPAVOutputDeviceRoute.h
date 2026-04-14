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

- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)isAppleAccessory;
- (long long)clusterType;
- (id)playingPairedDeviceName;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (id)clusterComposition;
- (BOOL)isPickable;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)canAccessRemoteAssets;
- (BOOL)isPickedOnPairedDevice;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isVolumeControlAvailable;
- (id)groupUID;
- (id)description;
- (BOOL)requiresPassword;
- (id)routeUID;
- (void).cxx_destruct;
- (BOOL)isKnown;
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
- (BOOL)supportsRemoteControl;
- (BOOL)supportsWirelessDisplay;

@end
