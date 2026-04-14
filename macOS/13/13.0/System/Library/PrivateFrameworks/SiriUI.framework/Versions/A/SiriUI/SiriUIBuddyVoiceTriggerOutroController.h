@class SiriUIBuddyController, NSString, NSArray;

@interface SiriUIBuddyVoiceTriggerOutroController : NSViewController <SiriUIBuddySubviewController>

@property (weak) SiriUIBuddyController *parentController;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

@end
