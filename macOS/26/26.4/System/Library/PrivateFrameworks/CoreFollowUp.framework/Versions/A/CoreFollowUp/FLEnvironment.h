@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (BOOL)isInternal;
- (BOOL)shouldHideAllFollowUps;
- (BOOL)isUnlocked;
- (double)oneDayTimeInterval;
- (BOOL)stressMode;
- (id)supportedBundleIdentifiers;
- (void).cxx_destruct;
- (BOOL)shouldShowUnapprovedItems;
- (id)init;
- (id)supportedNotifyingAppIds;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)a0;
- (id)stressBundleIdentifiers;
- (BOOL)normalizeExpirationToMidnight;

@end
