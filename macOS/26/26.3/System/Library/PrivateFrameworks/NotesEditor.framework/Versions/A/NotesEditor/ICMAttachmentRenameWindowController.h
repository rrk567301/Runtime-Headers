@class NSTextField, NSString, ICMAlertSheetTouchBarController, NSButton, ICAttachment;

@interface ICMAttachmentRenameWindowController : NSWindowController <NSTextFieldDelegate>

@property (retain, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) NSTextField *textField;
@property (weak, nonatomic) NSButton *doneButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) ICMAlertSheetTouchBarController *touchBarController;
@property (retain, nonatomic) NSString *originalTitle;
@property (readonly, nonatomic) NSString *currentTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)renameWindowControllerWithAttachment:(id)a0;

- (id)touchBar;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)windowDidLoad;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)doneButtonPressed:(id)a0;

@end
