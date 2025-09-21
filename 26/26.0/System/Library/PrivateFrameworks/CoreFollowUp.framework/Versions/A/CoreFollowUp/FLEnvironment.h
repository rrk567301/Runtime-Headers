@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (BOOL)isUnlocked;
- (BOOL)isInternal;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (BOOL)stressMode;
- (BOOL)normalizeExpirationToMidnight;
- (id)stressBundleIdentifiers;
- (id)init;
- (double)oneDayTimeInterval;
- (id)supportedBundleIdentifiers;
- (id)supportedNotifyingAppIds;
- (BOOL)shouldHideAllFollowUps;
- (BOOL)shouldShowUnapprovedItems;
- (void).cxx_destruct;

@end
