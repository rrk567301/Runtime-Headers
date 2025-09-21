@class HDProfile, _HKBehavior;

@interface HDCloudSyncPlatformConfiguration : NSObject {
    HDProfile *_profile;
    _HKBehavior *_behavior;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _allowLiteSync;
}

@property (copy, nonatomic) id /* block */ isSleepFocusOn;

- (void).cxx_destruct;
- (char)canLiteSyncPull;
- (const char *)priorityForPeriodicSyncActivity;
- (char)_isSleepFocusOn;
- (long long)_baseIntervalForAppleWatchAllowingLiteSync:(char)a0 tinker:(char)a1;
- (long long)_baseIntervalForRealityDevice;
- (long long)_baseIntervalForiPhoneAllowingLiteSync:(char)a0;
- (long long)baseIntervalForPeriodicSyncActivity;
- (double)cellularSyncThreshold;
- (id)initWithPrimaryProfile:(id)a0 behavior:(id)a1;
- (char)isConfiguredForLiteSync;
- (double)liteSyncThreshold;
- (char)participateInCoordinatedSync;
- (char)requireInexpensiveNetworking;
- (char)shouldRegisterForPeriodicSyncActivities;
- (char)shouldRestrictSyncInSleepFocus;
- (void)unitTest_setAllowLiteSync:(char)a0;

@end
