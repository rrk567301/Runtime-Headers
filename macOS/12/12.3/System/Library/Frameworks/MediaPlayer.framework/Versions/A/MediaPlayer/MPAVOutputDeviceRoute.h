@class NSString, NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute

@property (class, readonly, copy, nonatomic) NSString *localDeviceUID;

@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) void *logicalLeaderOutputDevice;
@property (readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader;

+ (void *)logicalLeaderFromOutputDevices:(id)a0;
+ (long long)pickableRouteTypeForOutputDevice:(void *)a0;

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
- (long long)pickableRouteType;
- (BOOL)supportsWirelessDisplay;
- (BOOL)isClusterRoute;
- (BOOL)isAppleTVRoute;
- (BOOL)isMacRoute;
- (BOOL)isCarplayRoute;
- (BOOL)isHomePodRoute;
- (BOOL)isStereoPair;
- (BOOL)isB520Route;
- (BOOL)isDeviceSpeakerRoute;
- (BOOL)isDeviceRoute;
- (BOOL)isLowFidelityRoute;
- (long long)originalRouteSubtype;
- (BOOL)isHomeTheaterRoute;
- (BOOL)isAirPlayRoute;
- (BOOL)supportsAirPlayGrouping;
- (BOOL)isSplitterCapable;
- (BOOL)isPhoneRoute;
- (BOOL)headTrackedSpatialAudioEnabled;
- (BOOL)isLowLatencyRoute;
- (id)designatedGroupLeaderRouteUID;
- (BOOL)requiresPassword;
- (BOOL)_anyOutputDevicePassesMRFunction:(void /* function */ *)a0;
- (BOOL)_anyOutputDevicePassesTest:(id /* block */)a0;

@end
