@class NSUserDefaults;

@interface FLEnvironment : NSObject

@property (retain, nonatomic) NSUserDefaults *followupDefaults;
@property (readonly, nonatomic) char followUpExtensionSupportEnabled;
@property (readonly, nonatomic) char followUpZeroActionsForTheWorld;

+ (id)currentEnvironment;

- (id)init;
- (void).cxx_destruct;
- (char)isUnlocked;
- (char)isInternal;
- (char)normalizeExpirationToMidnight;
- (double)oneDayTimeInterval;
- (void)setFollowUpExtensionSupportEnabled:(char)a0;
- (char)shouldHideAllFollowUps;
- (char)shouldShowUnapprovedItems;
- (id)stressBundleIdentifiers;
- (char)stressMode;
- (id)supportedBundleIdentifiers;
- (id)supportedNotifyingAppIds;

@end
