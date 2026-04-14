@class NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, CoreTelephonyClientDataDelegate, ICCloudAvailability> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasProperNetworkConditionsToShowCloudMedia;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)_applicationWillEnterForeground:(id)a0;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)canShowCloudVideo;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)canShowCloudMusic;
- (BOOL)isCellularDataRestrictedForVideos;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)_wifiStateDidChangeNotification:(id)a0;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)_uncachedIsShowingAllVideo;
- (BOOL)_uncachedIsShowingAllMusic;
- (void)_registerPerAppNetworkDataAccessPolicyChangedNotification;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)a0;
- (BOOL)isNetworkReachable;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (id)init;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)_unregisterPerAppNetworkDataAccessPolicyChangedNotification;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)a0;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (void)dealloc;

@end
