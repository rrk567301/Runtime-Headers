@interface DefaultBrowserPromptingManager : NSObject {
    BOOL _setupComplete;
    BOOL _shouldForceShowBanner;
    BOOL _shouldTriggerAttributionAfterSetup;
}

@property (nonatomic) int promptingState;
@property (readonly, nonatomic) BOOL isShowingDefaultBrowserBanner;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)performDelayedLaunchOperations;
- (BOOL)_shouldShowDefaultBrowserBanner;
- (double)_intervalToWaitBeforeFourthPrompt;
- (double)_intervalToWaitBeforeThirdPrompt;
- (void)_intializePromptingStateFromUserDefaults;
- (void)_setDateOfLastPromptToNow;
- (void)_showDefaultBrowserBannerIfNecessary;
- (void)_showDefaultBrowserBannerIfNecessaryWithTrigger:(BOOL)a0;
- (void)forceShowDefaultBrowserBannerWhenReadyWithTrigger:(BOOL)a0;
- (void)preventFuturePromptsUntilNextSafariUpdate;
- (void)willHideDefaultBrowserBanner;

@end
