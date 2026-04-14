@class CoreTelephonyClient, NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, CoreTelephonyClientDataDelegate, ICCloudAvailability> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasProperNetworkConditionsToShowCloudMedia;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
    BOOL _isCellularDataActive;
    BOOL _isCellularDataRestrictedForMusic;
    BOOL _isShowingAllMusic;
    BOOL _isShowingAllVideo;
    BOOL _isUpdateInProgress;
    BOOL _isWiFiEnabled;
    BOOL _isWiFiAssociated;
    BOOL _isEthernetWired;
    BOOL _isNetworkReachable;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    long long _networkType;
    RadiosPreferences *_radiosPreferences;
    struct __CTServerConnection { } *_ctServerConnection;
    CoreTelephonyClient *_telephonyClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isNetworkReachable;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)canShowCloudMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)_uncachedIsShowingAllMusic;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void)airplaneModeChanged;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)a0;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)internetConnectionStateChanged:(id)a0;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)a0;
- (void)_registerPerAppNetworkDataAccessPolicyChangedNotification;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (id)init;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (void)_wifiStateDidChangeNotification:(id)a0;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (void)_unregisterPerAppNetworkDataAccessPolicyChangedNotification;
- (BOOL)_uncachedIsShowingAllVideo;
- (void).cxx_destruct;

@end
