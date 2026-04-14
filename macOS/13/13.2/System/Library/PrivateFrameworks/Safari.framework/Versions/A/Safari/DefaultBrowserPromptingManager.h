@interface DefaultBrowserPromptingManager : NSObject

@property (nonatomic) int promptingState;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)performDelayedLaunchOperations;
- (void)willHideDefaultBrowserBanner;
- (void)preventFuturePromptsUntilNextSafariUpdate;
- (void)_intializePromptingStateFromUserDefaults;
- (double)_intervalToWaitBeforeThirdPrompt;
- (double)_intervalToWaitBeforeFourthPrompt;
- (BOOL)_shouldShowDefaultBrowserBanner;
- (void)_showDefaultBrowserBannerIfNecessary;
- (void)_setDateOfLastPromptToNow;

@end
