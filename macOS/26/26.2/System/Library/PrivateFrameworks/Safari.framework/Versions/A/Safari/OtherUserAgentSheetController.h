@class NSString, NSTextView, NSButton;

@interface OtherUserAgentSheetController : NSWindowController {
    NSString *_userAgentString;
    NSTextView *userAgentTextView;
    NSButton *acceptButton;
}

- (id)windowNibName;
- (void)textDidChange:(id)a0;
- (void).cxx_destruct;
- (id)userAgentString;
- (void)awakeFromNib;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)acceptUserAgentString:(id)a0;
- (void)cancelUserAgentString:(id)a0;
- (id)initWithUserAgentString:(id)a0;
- (void)updateAcceptButton;

@end
