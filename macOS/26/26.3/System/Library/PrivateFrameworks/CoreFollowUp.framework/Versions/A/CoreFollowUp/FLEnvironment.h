@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (id)supportedBundleIdentifiers;
- (double)oneDayTimeInterval;
- (BOOL)isInternal;
- (id)init;
- (BOOL)stressMode;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)normalizeExpirationToMidnight;
- (id)stressBundleIdentifiers;
- (id)supportedNotifyingAppIds;
- (BOOL)isUnlocked;
- (BOOL)shouldShowUnapprovedItems;
- (BOOL)shouldHideAllFollowUps;

@end
