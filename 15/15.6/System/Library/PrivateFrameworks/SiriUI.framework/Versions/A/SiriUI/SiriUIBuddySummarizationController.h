@class SiriUIBuddyController, NSString, NSView, NSArray, NSImage, OBTemplateView, NSAttributedString;
@protocol UNNotificationOnboardingViewModel, UNNotificationOnboardingController;

@interface SiriUIBuddySummarizationController : NSViewController <UNNotificationOnboardingControllerDelegate, SiriUIBuddySubviewController> {
    OBTemplateView<UNNotificationOnboardingController> *_summarizationOBTemplateView;
    long long _state;
    long long _userChoice;
    NSString *_customizationPageNextButtonTitile;
}

@property (weak) id<UNNotificationOnboardingViewModel> notificationOnboardingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) SiriUIBuddyController *parentController;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSView *topContentView;
@property (readonly) char saeEnabled;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSImage *topImage;
@property (readonly) OBTemplateView *templateView;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) NSString *templateNextButtonTitle;
@property (readonly) NSString *templatePreviousButtonTitle;
@property (readonly) NSAttributedString *templateAttributedBodyText;
@property (readonly) char needsExtraWideContent;
@property (readonly) char isInitialSubState;
@property (readonly) char shouldDisableNextButton;
@property (readonly) id /* block */ templateAlternateActionBlock;
@property (readonly) id /* block */ templatePreviousButtonActionBlock;
@property (readonly) id /* block */ templateNextButtonActionBlock;

+ (char)_appCategorizationFeatureEnabled;
+ (char)shouldShowDuringGMOnboarding;

- (void).cxx_destruct;
- (void)loadView;
- (void)_loadSummarizationCustomizationView;
- (void)_loadSummarizationIntroView;
- (void)_userEnabledSummarization:(char)a0;
- (id)initWithParentController:(id)a0 saeEnabled:(char)a1;
- (void)onboardingController:(id)a0 canProceed:(char)a1 nextButtonText:(id)a2;
- (void)onboardingController:(id)a0 requestsPushingTo:(id)a1;
- (void)saveSummarizationState;
- (void)willExitPane;

@end
