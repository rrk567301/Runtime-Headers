@interface DefaultBrowserPromptingManager : NSObject {
    BOOL _safariWasLaunchedFromTrySafariNotification;
    struct unique_ptr<Safari::AutomaticTerminationDisabler, std::default_delete<Safari::AutomaticTerminationDisabler>> { struct __compressed_pair<Safari::AutomaticTerminationDisabler *, std::default_delete<Safari::AutomaticTerminationDisabler>> { struct AutomaticTerminationDisabler *__value_; } __ptr_; } _automaticTerminationDisabler;
}

@property (nonatomic) int promptingState;
@property (nonatomic) BOOL shouldMakeSafariDefaultBrowserOnQuit;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)performDelayedLaunchOperations;
- (void)registerTrySafariEventHandler;
- (void)makeSafariDefaultBrowserOnQuitIfNecessary;
- (void)willHideDefaultBrowserBanner;
- (void)preventFuturePromptsUntilNextSafariUpdate;
- (void)_intializePromptingStateFromUserDefaults;
- (void)_handleTrySafariEvent:(id)a0 withReplyEvent:(id)a1;
- (void)_showDefaultBrowserBannerIfNecessary;
- (void)_willPowerOff:(id)a0;
- (double)_intervalToWaitBeforeThirdPrompt;
- (double)_intervalToWaitBeforeFourthPrompt;
- (void)_setDateOfLastPromptToNow;
- (BOOL)_shouldShowDefaultBrowserBanner;

@end
