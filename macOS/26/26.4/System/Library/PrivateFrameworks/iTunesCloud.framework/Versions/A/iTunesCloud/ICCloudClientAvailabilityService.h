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

- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)canShowCloudVideo;
- (id)initWithListenerEndpointProvider:(id)a0;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestricted;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (void).cxx_destruct;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;

@end
