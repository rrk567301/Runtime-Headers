@class CoreTelephonyClient, NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, CoreTelephonyClientDataDelegate, ICCloudAvailability> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    char _hasProperNetworkConditionsToShowCloudMedia;
    char _isAirplaneModeActive;
    char _isAutoDownloadOnCellularAllowed;
    char _isCellularDataActive;
    char _isCellularDataRestrictedForMusic;
    char _isShowingAllMusic;
    char _isShowingAllVideo;
    char _isUpdateInProgress;
    char _isWiFiEnabled;
    char _isWiFiAssociated;
    char _isEthernetWired;
    char _isNetworkReachable;
    char _canShowCloudMusic;
    char _canShowCloudVideo;
    char _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    char _preferencesChangedNotifyTokenIsValid;
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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isNetworkReachable;
- (void)internetConnectionStateChanged:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)airplaneModeChanged;
- (char)canShowCloudDownloadButtons;
- (char)canShowCloudMusic;
- (char)canShowCloudVideo;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (char)hasProperNetworkConditionsToPlayMedia;
- (char)hasProperNetworkConditionsToShowCloudMedia;
- (char)isCellularDataRestrictedForMusic;
- (char)isCellularDataRestrictedForStoreApps;
- (char)isCellularDataRestrictedForVideos;
- (char)shouldProhibitMusicActionForCurrentNetworkConditions;
- (char)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (char)shouldProhibitVideosActionForCurrentNetworkConditions;
- (char)_isAutoDownloadOnCellularAllowed;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(char)a0;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(char)a0;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)_registerPerAppNetworkDataAccessPolicyChangedNotification;
- (char)_uncachedIsAutoDownloadOnCellularAllowed;
- (char)_uncachedIsShowingAllMusic;
- (char)_uncachedIsShowingAllVideo;
- (void)_unregisterPerAppNetworkDataAccessPolicyChangedNotification;
- (void)_wifiStateDidChangeNotification:(id)a0;

@end
