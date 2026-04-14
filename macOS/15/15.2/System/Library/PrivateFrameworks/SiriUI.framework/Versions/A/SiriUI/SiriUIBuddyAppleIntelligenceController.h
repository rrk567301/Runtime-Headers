@class NSView, NSString, NSArray, NSAttributedString, SiriUIBuddyController, _TtC6SiriUI32GMAvailabilityBuddyFlowViewModel, OBTemplateView, NSImage;

@interface SiriUIBuddyAppleIntelligenceController : NSViewController <SiriUI.GMAvailabilityBuddyFlowViewModelDelegate, SiriUIBuddySubviewController> {
    _TtC6SiriUI32GMAvailabilityBuddyFlowViewModel *_model;
    BOOL _gmOptInReady;
    BOOL _gmWaitlistReady;
    BOOL _waitingForTicketStatus;
}

@property (weak) SiriUIBuddyController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSView *topContentView;
@property (readonly) BOOL saeEnabled;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSImage *topImage;
@property (readonly) OBTemplateView *templateView;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) NSString *templateNextButtonTitle;
@property (readonly) NSString *templatePreviousButtonTitle;
@property (readonly) NSAttributedString *templateAttributedBodyText;
@property (readonly) BOOL needsExtraWideContent;
@property (readonly) BOOL isInitialSubState;
@property (readonly) BOOL shouldDisableNextButton;
@property (readonly) id /* block */ templateAlternateActionBlock;
@property (readonly) id /* block */ templatePreviousButtonActionBlock;
@property (readonly) id /* block */ templateNextButtonActionBlock;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)bodyText;
- (id)bulletList;
- (void)alertDidDismiss;
- (void)_disableControlsIfNeeded;
- (id)_loadAppleIntelligenceIcon;
- (void)_moveToNextPanel;
- (void)_restoreControlsIfNeeded;
- (void)_setEnableGM:(BOOL)a0;
- (void)_showFailedToJoinAFMWaitlistAlert;
- (void)didFinishJoiningAFMWaitlist:(BOOL)a0;
- (id)initWithParentController:(id)a0 saeEnabled:(BOOL)a1;
- (void)willExitPane;
- (void)willRequestJoiningAFMWaitlist;

@end
