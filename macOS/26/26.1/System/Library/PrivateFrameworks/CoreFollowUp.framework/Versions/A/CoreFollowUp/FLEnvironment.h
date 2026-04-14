@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (double)oneDayTimeInterval;
- (id)stressBundleIdentifiers;
- (BOOL)isUnlocked;
- (id)supportedNotifyingAppIds;
- (BOOL)isInternal;
- (id)supportedBundleIdentifiers;
- (BOOL)normalizeExpirationToMidnight;
- (BOOL)stressMode;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldShowUnapprovedItems;
- (BOOL)shouldHideAllFollowUps;
- (id)init;

@end
