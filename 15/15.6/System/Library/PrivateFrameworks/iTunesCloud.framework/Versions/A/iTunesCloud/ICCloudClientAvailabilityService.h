@class NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;

@interface ICCloudClientAvailabilityService : NSObject <ICCloudAvailability>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, weak, nonatomic) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)canShowCloudDownloadButtons;
- (char)canShowCloudMusic;
- (char)canShowCloudVideo;
- (char)hasProperNetworkConditionsToPlayMedia;
- (char)hasProperNetworkConditionsToShowCloudMedia;
- (char)isCellularDataRestricted;
- (char)isCellularDataRestrictedForMusic;
- (char)isCellularDataRestrictedForStoreApps;
- (char)isCellularDataRestrictedForVideos;
- (char)shouldProhibitActionsForCurrentNetworkConditions;
- (char)shouldProhibitMusicActionForCurrentNetworkConditions;
- (char)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (char)shouldProhibitVideosActionForCurrentNetworkConditions;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (id)initWithListenerEndpointProvider:(id)a0;

@end
