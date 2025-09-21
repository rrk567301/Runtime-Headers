@class NSError, NSMenu, NSTextField;

@interface NSDocumentNonModalAlertViewController : NSViewController {
    NSTextField *_textField;
    NSError *_errorToDisplay;
    NSMenu *_menu;
}

@property (copy) NSError *errorToDisplay;
@property (retain) NSMenu *menu;

- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
