@class _TtC6Safari27SafariOnboardingCoordinator, NSArray;

@interface Safari.SafariOnboardingCoordinator : NSObject {
    void /* unknown type, empty encoding */ stateManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentStartPageOnboardingProviders;
}

@property (class, nonatomic, readonly) _TtC6Safari27SafariOnboardingCoordinator *sharedCoordinator;

@property (nonatomic, readonly) NSArray *startPageOnboardingCollectionViewItemConfigurations;

- (id)init;
- (void).cxx_destruct;
- (void)didCompleteOnboarding:(id)a0;
- (void)pauseStartPageOnboarding;

@end
