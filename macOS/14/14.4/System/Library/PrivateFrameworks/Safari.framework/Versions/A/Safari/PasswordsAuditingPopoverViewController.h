@class WBSSavedAccount, NSString, ContentHuggingTextView, NSClipView, NSPopover;
@protocol PasswordsAuditingHandler;

@interface PasswordsAuditingPopoverViewController : NSViewController <NSTextViewDelegate> {
    NSString *_duplicatedPasswordDomain;
    NSPopover *_popover;
}

@property (weak) NSClipView *passwordsAuditingWarningLabelEnclosingClipView;
@property ContentHuggingTextView *passwordsAuditingWarningLabel;
@property (weak, nonatomic) id<PasswordsAuditingHandler> passwordAuditingHandler;
@property (readonly, nonatomic) WBSSavedAccount *auditingSavedAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (void)viewDidLoad;
- (void)closePopover;
- (void)showPopoverWithPositioningView:(id)a0;
- (void)_updateWarningLabelStringValue;
- (id)initWithAuditingSavedAccount:(id)a0;

@end
