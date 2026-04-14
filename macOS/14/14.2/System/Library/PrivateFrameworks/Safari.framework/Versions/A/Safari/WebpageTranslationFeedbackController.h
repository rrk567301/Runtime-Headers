@class NSAlert, WBSTranslationContext, NSString, WBSTranslationConsentAlertLearnMoreWindowControllerMac, WBSTranslationConsentAlertHelper, NSPopUpButton, NSWindow, NSButton;

@interface WebpageTranslationFeedbackController : NSObject <NSTextFieldDelegate, WBSTranslationConsentAlertHelperDelegate> {
    NSWindow *_sheetWindow;
    NSAlert *_reportTranslationIssueAlert;
    NSButton *_cancelButton;
    NSButton *_reportButton;
    double _stackViewWidth;
    NSPopUpButton *_translationIssuePopupButton;
    WBSTranslationConsentAlertHelper *_consentHelper;
    WBSTranslationConsentAlertLearnMoreWindowControllerMac *_learnMoreController;
}

@property (readonly, nonatomic) WBSTranslationContext *translationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (void)beginSheetModalForWindow:(id)a0;
- (id)_attributedInformativeText;
- (id)_clickableTextFieldWithAttributedInformativeText:(id)a0;
- (void)_createReportButton;
- (void)_createReportTranslationIssuePopUpButton;
- (void)_report:(id)a0;
- (id)_reportTranslationIssueAlertAccessoryStackView;
- (void)_setUpAlert;
- (void)_translationIssueSelectionDidChange:(id)a0;
- (id)initWithTranslationContext:(id)a0;
- (void)translationConsentAlertDidClickHelpButton;

@end
