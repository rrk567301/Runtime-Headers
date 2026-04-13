@class NSString, NSTextView, NSButton;

@interface OtherUserAgentSheetController : NSWindowController {
    NSString *_userAgentString;
    NSTextView *userAgentTextView;
    NSButton *acceptButton;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)textDidChange:(id)a0;
- (id)windowNibName;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (id)userAgentString;
- (id)initWithUserAgentString:(id)a0;
- (void)updateAcceptButton;
- (void)acceptUserAgentString:(id)a0;
- (void)cancelUserAgentString:(id)a0;

@end
