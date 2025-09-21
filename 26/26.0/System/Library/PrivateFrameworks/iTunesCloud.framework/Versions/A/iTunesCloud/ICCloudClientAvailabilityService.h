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

- (BOOL)canShowCloudVideo;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)canShowCloudMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestricted;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (id)initWithListenerEndpointProvider:(id)a0;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)isCellularDataRestrictedForMusic;
- (void).cxx_destruct;

@end
