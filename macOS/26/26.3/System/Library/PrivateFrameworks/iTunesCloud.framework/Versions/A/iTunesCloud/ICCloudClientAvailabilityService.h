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

- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForVideos;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)isCellularDataRestricted;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudVideo;
- (id)initWithListenerEndpointProvider:(id)a0;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (void).cxx_destruct;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;

@end
