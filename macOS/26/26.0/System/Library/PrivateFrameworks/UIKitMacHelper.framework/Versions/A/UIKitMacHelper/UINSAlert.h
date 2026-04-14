@class NSAttributedString, NSString, NSImage, NSMutableArray, NSAlert, NSWindow;

@interface UINSAlert : NSAlert <UINSAlert> {
    NSWindow *_parentWindow;
    NSAlert *_actualAlert;
    NSString *_title;
    NSString *_message;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedMessage;
    NSImage *_icon;
    unsigned long long _style;
    BOOL _cancelButtonAdded;
    NSMutableArray *_buttons;
    NSMutableArray *_textFields;
    NSImage *_accessoryImage;
}

- (void)setAttributedTitle:(id)a0;
- (void)setMessage:(id)a0;
- (void)setAlertStyle:(unsigned long long)a0;
- (void)setIcon:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)_addButtonToAlert:(id)a0;
- (void)_addTextFieldToAlert:(id)a0;
- (void)_setTextProperties:(id)a0 fromAlertTextField:(id)a1;
- (void)_sizeAndStyleAccessoryImageView:(id)a0;
- (void)_syncActualButtonToButton:(id)a0;
- (void)_syncTitlesAndForceLayout:(BOOL)a0;
- (void)addButton:(id)a0 isCancel:(BOOL)a1;
- (void)addTextField:(id)a0;
- (void)beginSheetModalWithCompletion:(id /* block */)a0;
- (void)dismissAlert;
- (id)initWithParentWindow:(id)a0;
- (void)setAccessoryImage:(id)a0;
- (void)setAttributedMessage:(id)a0;
- (id)textForTextFieldIndex:(long long)a0;
- (void)updateButton:(id)a0;
- (void)updateButtonWithIdentifier:(long long)a0 keyEquivalent:(id)a1;
- (void)updateButtons:(id)a0;
- (void)updateTextField:(id)a0;

@end
