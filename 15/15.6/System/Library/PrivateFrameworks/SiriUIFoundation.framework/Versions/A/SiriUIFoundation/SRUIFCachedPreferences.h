@class NSUserDefaults, NSString, NSDictionary, NSHashTable, UAFAssetUtilities, NSObject, UAFAssetStatus;
@protocol OS_dispatch_queue;

@interface SRUIFCachedPreferences : NSObject <UAFAssetUtilitiesDelegate> {
    NSUserDefaults *_textInputDefaults;
    char _isHoldToTalkForTextInputEnabled;
    char _isStreamingDictationEnabled;
    char _isSiriSafeForLockScreen;
    char _announceNotificationsInCarPlayTemporarilyDisabled;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    UAFAssetUtilities *_assetUtilities;
}

@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (nonatomic) char understandingOnDeviceAssetsAvailable;
@property (retain, nonatomic) NSDictionary *assistantUODStatus;
@property (readonly, nonatomic) char isHoldToTalkForTextInputEnabled;
@property (readonly, nonatomic) char isStreamingDictationEnabled;
@property (readonly, nonatomic) char isSiriSafeForLockScreen;
@property (readonly, nonatomic) char announceNotificationsInCarPlayTemporarilyDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updatePreferences;
- (char)assetsNeedSpace;
- (void)_notifyObserversOfSettingsChangeWithBlock:(id /* block */)a0;
- (void)_setAnnounceNotificationsInCarPlayTemporarilyDisabled:(char)a0;
- (char)assetsDownloading;
- (void)handleAssetStatusUpdated;
- (void)siriUODAvailabilityDidChange:(char)a0;
- (void)siriUODStatusDidChange;

@end
