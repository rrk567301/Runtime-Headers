@class NSString, NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;

+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;
+ (void *)logicalLeaderFromOutputDevices:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)productIdentifier;
- (long long)routeType;
- (long long)clusterType;
- (id)routeName;
- (BOOL)canAccessRemoteAssets;
- (BOOL)canPlayEncryptedProgressiveDownloadAssets;
- (BOOL)canFetchMediaDataFromSender;
- (BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (BOOL)supportsHeadTrackedSpatialAudio;
- (id)clusterComposition;
- (id)initWithOutputDevices:(id)a0;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isVolumeControlAvailable;
- (id)playingPairedDeviceName;
- (BOOL)isPickedOnPairedDevice;
- (id)groupUID;
- (BOOL)supportsGrouping;
- (id)routeUID;
- (long long)routeSubtype;
- (long long)originalRouteSubtype;
- (id)designatedGroupLeaderRouteUID;
- (long long)pickableRouteType;
- (BOOL)isDeviceRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)requiresPassword;
- (BOOL)supportsWirelessDisplay;
- (BOOL)headTrackedSpatialAudioEnabled;
- (BOOL)isAppleTVRoute;
- (BOOL)isSplitterCapable;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isStereoPair;
- (BOOL)isPhoneRoute;
- (BOOL)isMacRoute;
- (BOOL)isAirPlayRoute;
- (BOOL)isLowLatencyRoute;
- (BOOL)isCarplayRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isB520Route;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isLowFidelityRoute;
- (BOOL)isClusterRoute;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;

@end
