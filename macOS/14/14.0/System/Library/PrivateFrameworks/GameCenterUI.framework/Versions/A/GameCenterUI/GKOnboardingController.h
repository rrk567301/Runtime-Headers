@class NSViewController;
@protocol GKOnboardingFlowDelegate;

@interface GKOnboardingController : NSObject

@property (class, readonly, nonatomic) GKOnboardingController *shared;

@property (retain) NSViewController *sheetPresentingViewController;
@property (weak, nonatomic) id<GKOnboardingFlowDelegate> delegate;
@property BOOL invokedFromSystemSettings;

+ (id)describePlayerComparisonsBetween:(id)a0 and:(id)a1;
+ (id)landingViewController;

- (void).cxx_destruct;
- (void)presentFriendSuggestionsScreen:(id)a0;
- (void)dismissPresentingSheet;
- (void)presentContactsIntegrationConsentScreen:(id)a0;
- (void)presentPersonalizationScreen:(id)a0;
- (void)presentProfileCreatedScreen:(id)a0;
- (void)presentProfilePrivacyScreen:(id)a0;
- (void)presentViewController:(id)a0 presentingViewController:(id)a1;

@end
