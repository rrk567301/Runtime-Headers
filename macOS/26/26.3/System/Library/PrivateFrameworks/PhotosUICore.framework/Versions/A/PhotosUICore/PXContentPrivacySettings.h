@interface PXContentPrivacySettings : PXSettings

@property (nonatomic) long long simulationMode;
@property (nonatomic) long long simulatedAuthenticationType;
@property (nonatomic) BOOL shouldAlwaysShowUnlockButtonInContentUnavailableViews;
@property (nonatomic) long long authenticationBehaviorUponAppearing;
@property (nonatomic) BOOL shouldLockAfterScreenLocked;
@property (nonatomic) BOOL shouldLockAfterScreenSaverStarts;
@property (nonatomic) BOOL shouldLockWhenAppWindowIsBackgroundedAfterDelay;
@property (nonatomic) BOOL shouldLockAfterDelayWhenLeavingViewHierarchy;
@property (nonatomic) double autolockTimeout;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (BOOL)contentPrivacyEnabled;

@end
