@class NSImageView, NSArray, NSTextField, NSPanel, NSLayoutConstraint, NSButton, NSWindow;
@protocol SOEnableDictationDelegate;

@interface SOEnableDictationPanelController : NSObject {
    NSWindow *_parentWindow;
    id<SOEnableDictationDelegate> _delegate;
    id /* block */ _completion;
    NSPanel *panel;
    NSImageView *icon;
    NSTextField *messageText;
    NSTextField *informativeText;
    NSLayoutConstraint *informativeTextBottomSpace;
    NSButton *okButton;
    NSButton *cancelButton;
    NSButton *privacyButton;
    NSLayoutConstraint *privacyButtonTrailingSpace;
}

@property BOOL isAssistant;
@property BOOL disabling;
@property (retain) NSArray *privacyURLs;
@property (retain) NSArray *privacyTitles;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)okButtonClicked:(id)a0;
- (void)showAlertForWindow:(id)a0 showPrivacyButton:(BOOL)a1 completion:(id /* block */)a2;
- (void)privacyButtonClicked:(id)a0;

@end
