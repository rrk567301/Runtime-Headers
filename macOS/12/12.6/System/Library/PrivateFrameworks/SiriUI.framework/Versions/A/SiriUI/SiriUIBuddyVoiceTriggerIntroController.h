@class SiriUIBuddyController, NSString, NSArray;

@interface SiriUIBuddyVoiceTriggerIntroController : NSViewController <SiriUIBuddySubviewController>

@property (weak) SiriUIBuddyController *parentController;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)initWithParentController:(id)a0;
- (void)didOpenLid;
- (void)didCloseLid;
- (void)skipVoiceTrigger:(id)a0;
- (void)updateViewForClamshellMode:(BOOL)a0;

@end
