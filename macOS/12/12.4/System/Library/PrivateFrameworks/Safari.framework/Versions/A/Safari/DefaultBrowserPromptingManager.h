@interface DefaultBrowserPromptingManager : NSObject

@property (nonatomic) int promptingState;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)performDelayedLaunchOperations;
- (void)willHideDefaultBrowserBanner;
- (void)preventFuturePromptsUntilNextSafariUpdate;
- (void)_intializePromptingStateFromUserDefaults;
- (void)_showDefaultBrowserBannerIfNecessary;
- (double)_intervalToWaitBeforeThirdPrompt;
- (double)_intervalToWaitBeforeFourthPrompt;
- (void)_setDateOfLastPromptToNow;
- (BOOL)_shouldShowDefaultBrowserBanner;

@end
