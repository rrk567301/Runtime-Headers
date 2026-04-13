@class NSString, RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, ICCloudAvailability> {
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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isNetworkReachable;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)airplaneModeChanged;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudVideo;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (void)_wifiStateDidChangeNotification:(id)a0;
- (BOOL)_hasCellularCapability;
- (BOOL)_hasWiFiCapability;
- (void)_setNewIsNetworkReachable:(BOOL)a0 networkType:(long long)a1;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (BOOL)_uncachedIsShowingAllMusic;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (BOOL)_uncachedIsShowingAllVideo;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)a0;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)a0;

@end
