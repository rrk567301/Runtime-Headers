@class NSButton, NSString, NSPopUpButton, NSAlert, NSWindow;

@interface FeedbackAlertController : NSObject <NSTextFieldDelegate> {
    NSWindow *_sheetWindow;
    NSAlert *_alert;
    NSButton *_cancelButton;
    NSButton *_reportButton;
    double _stackViewWidth;
    NSPopUpButton *_popupButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_helpAnchor;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (id)_messageText;
- (void)beginSheetModalForWindow:(id)a0;
- (id)_alertAccessoryStackView;
- (id)_attributedInformativeText;
- (id)_clickableTextFieldWithAttributedInformativeText:(id)a0;
- (void)_createPopUpButton;
- (void)_createReportButton;
- (void)_handleLearnMoreLinkClick;
- (id)_informativeTextString;
- (void)_issueSelectionDidChange:(id)a0;
- (id)_issueStrings;
- (id)_menuTitle;
- (void)_presentLearnMoreView:(id)a0;
- (void)_report:(id)a0;
- (void)_reportFeedback:(long long)a0;
- (void)_setUpAlert;

@end
