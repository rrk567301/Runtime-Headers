@class NSDate;
@protocol ExternalURLNavigationDelegate;

@interface ExternalURLNavigationHandler : NSObject {
    unsigned long long _requestGroup;
    BOOL _shouldSuppressAutomaticExternalSchemeNavigations;
    NSDate *_recentExternalSchemeNavigationWindowStart;
    unsigned long long _recentExternalSchemeNavigations;
}

@property (weak, nonatomic) id<ExternalURLNavigationDelegate> delegate;

- (void).cxx_destruct;
- (void)reset;
- (long long)handleNavigationToExternalURL:(id)a0 withTabDialogPresenter:(id)a1 sourceFrame:(id)a2 userInitiatedAction:(id)a3 inLockdownMode:(BOOL)a4;
- (void)_determineIfPageIsTryingToSpamUserWithExternalSchemeNavigations;
- (id)_originStringFromSourceFrame:(id)a0 externalURLType:(long long)a1;
- (long long)_URLTypeForURL:(id)a0;
- (void)_enqueueOrPresentDialogWithConfiguration:(id)a0 externalURL:(id)a1 applicationURL:(id)a2 tabDialogPresenter:(id)a3;

@end
