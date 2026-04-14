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

- (BOOL)canShowCloudMusic;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (BOOL)canShowCloudVideo;
- (void).cxx_destruct;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)isCellularDataRestricted;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForMusic;
- (id)initWithListenerEndpointProvider:(id)a0;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;

@end
