@class _WKUserInitiatedAction, NSTimer, NSDate;

@interface WBSURLSpoofingMitigator : NSObject {
    NSDate *_dateOfLastSuspiciousProvisionalNavigationInterruption;
    unsigned long long _recentlyInterruptedNavigationCount;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSTimer *_timerForRevertingToCommittedURL;
    char _preferShowingCommittedURLForChromeInitiatedLoad;
}

@property (readonly, nonatomic) char UIShouldReflectCommittedURLInsteadOfCurrentURL;
@property (nonatomic) long long navigationSource;

+ (char)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;

- (void).cxx_destruct;
- (void)didCommitNavigation;
- (void)didFailProvisionalNavigationWithError:(id)a0;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:(id)a0;
- (void)willStartNewBrowserChromeInitiatedNavigation;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(char)a0;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)reflectCommittedURLIfPossible;

@end
