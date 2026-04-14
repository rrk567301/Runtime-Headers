@class UAOnboardingMainViewController;

@interface UAAccessibilityOnboardingManager : NSObject

@property (retain, nonatomic) UAOnboardingMainViewController *_mainViewController;

+ (void)settingsDomainAndKeysToTransfer:(id /* block */)a0;

- (void).cxx_destruct;
- (id)mainViewController;
- (id)templateView;
- (id)initWithHost:(id)a0 userInfo:(id)a1;

@end
