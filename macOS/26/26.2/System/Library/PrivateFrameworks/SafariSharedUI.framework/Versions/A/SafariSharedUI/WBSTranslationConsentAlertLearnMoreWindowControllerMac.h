@class NSButton, NSTextView, NSLayoutConstraint;
@protocol WBSTranslationConsentAlertHelperDelegate;

@interface WBSTranslationConsentAlertLearnMoreWindowControllerMac : NSWindowController

@property (nonatomic) unsigned long long alertType;
@property (weak) NSButton *agreeButton;
@property (weak) NSButton *declineButton;
@property NSTextView *textView;
@property (weak, nonatomic) NSLayoutConstraint *declineButtonTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *declineButtonBottomConstraint;
@property (weak, nonatomic) id<WBSTranslationConsentAlertHelperDelegate> delegate;

+ (id)learnMoreSheetOfType:(unsigned long long)a0 delegate:(id)a1;

- (id)windowNibName;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)helpButtonClicked:(id)a0;
- (void)_setUpPanel;
- (void)agreeButtonClicked:(id)a0;
- (void)declineButtonClicked:(id)a0;

@end
