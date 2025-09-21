@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMCommSafetySettingsManager : NSObject <IMUnlockMonitorListener> {
    int _notificationToken;
}

@property (nonatomic) long long enablementGroup;
@property (retain, nonatomic) id enablementSubscription;
@property (nonatomic) char checkSensitivePhotosAnalyticsEnabled;
@property (nonatomic) char shouldNotifyParentAboutSensitivePhotos;
@property (nonatomic) char childIsYoungAgeGroup;
@property (nonatomic) long long protectedChildAge;
@property (nonatomic) char hasConnected;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic, getter=isFeatureEnabled) char featureEnabled;
@property (readonly, nonatomic) char checksForSensitivityOnSend;
@property (readonly, nonatomic) char checksForSensitivityOnReceive;
@property (readonly, nonatomic) char checksForSensitivityOnNicknameReceive;
@property (retain, nonatomic) NSMutableArray *parents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)_updateSettings;
- (void)_configureUserSafetySettingsListener;
- (void)_connectToFamilyCircle:(id /* block */)a0;
- (long long)_fetchEnablementGroup;
- (char)_hasOverriddenEnablementGroup;
- (long long)_overriddenEnablementGroup;
- (char)_shouldUseScreenTimeAndFamilyCircle;

@end
