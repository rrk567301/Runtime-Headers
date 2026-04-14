@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (BOOL)isInternal;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (id)stressBundleIdentifiers;
- (BOOL)isUnlocked;
- (BOOL)shouldShowUnapprovedItems;
- (double)oneDayTimeInterval;
- (void).cxx_destruct;
- (BOOL)normalizeExpirationToMidnight;
- (id)supportedBundleIdentifiers;
- (BOOL)shouldHideAllFollowUps;
- (BOOL)stressMode;
- (id)init;
- (id)supportedNotifyingAppIds;

@end
