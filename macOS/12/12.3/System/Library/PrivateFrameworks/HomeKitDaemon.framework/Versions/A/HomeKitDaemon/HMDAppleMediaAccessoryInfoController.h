@class HMFWiFiNetworkInfo, NSNotificationCenter, HMFWiFiManager, NSObject;
@protocol OS_dispatch_queue, HMDAppleMediaAccessoryInfoControllerDataSource;

@interface HMDAppleMediaAccessoryInfoController : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak) id<HMDAppleMediaAccessoryInfoControllerDataSource> dataSource;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) HMFWiFiNetworkInfo *lastWifiNetworkInfo;
@property (retain) HMFWiFiManager *wifiManager;

- (void).cxx_destruct;
- (void)configure;
- (void)handleCurrentNetworkChangedNotification:(id)a0;
- (id)currentWifiNetworkInfo;
- (void)_postUpdateWifiNetworkInfoIfDifferent:(id)a0;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 notificationCenter:(id)a2 wifiManager:(id)a3;

@end
