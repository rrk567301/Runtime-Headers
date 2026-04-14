@class SiriUIBuddyController, NSString, NSArray;

@interface SiriUIBuddyVoiceTriggerOutroController : NSViewController <SiriUIBuddySubviewController> {
    BOOL _showingCompactTrigger;
}

@property (weak) SiriUIBuddyController *parentController;
@property BOOL showCompactTriggerDisclosure;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)addBulletItems;
- (id)initWithParentController:(id)a0;

@end
