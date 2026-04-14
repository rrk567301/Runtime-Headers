@class SiriUIBuddyController, NSString, NSView, NSArray;

@interface SiriUIBuddyVoiceTriggerIntroController : NSViewController <SiriUIBuddySubviewController> {
    BOOL _showingCompactTrigger;
}

@property (weak) SiriUIBuddyController *parentController;
@property (nonatomic) BOOL trainingWithRemoteDarwinAvailable;
@property (nonatomic) long long introState;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSView *topContentView;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)_bodyText;
- (BOOL)_hasTouchBar;
- (void)addBulletItems;
- (void)didCloseLid;
- (void)didOpenLid;
- (id)initWithParentController:(id)a0;
- (void)skipVoiceTrigger:(id)a0;
- (id)topContentViewNonSAE;
- (id)topContentViewSAE;
- (void)updateViewForClamshellMode:(BOOL)a0 trainingWithRemoteDarwinAvailable:(BOOL)a1;

@end
