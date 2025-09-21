@interface PXContentPrivacySettings : PXSettings

@property (nonatomic) long long simulationMode;
@property (nonatomic) long long simulatedAuthenticationType;
@property (nonatomic) char shouldAlwaysShowUnlockButtonInContentUnavailableViews;
@property (nonatomic) long long authenticationBehaviorUponAppearing;
@property (nonatomic) char shouldLockAfterScreenLocked;
@property (nonatomic) char shouldLockAfterScreenSaverStarts;
@property (nonatomic) char shouldLockWhenAppWindowIsBackgroundedAfterDelay;
@property (nonatomic) char shouldLockAfterDelayWhenLeavingViewHierarchy;
@property (nonatomic) double autolockTimeout;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (char)contentPrivacyEnabled;

@end
