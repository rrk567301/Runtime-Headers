@class NSString, NSTextView, NSButton;

@interface OtherUserAgentSheetController : NSWindowController {
    NSString *_userAgentString;
    NSTextView *userAgentTextView;
    NSButton *acceptButton;
}

- (id)windowNibName;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (id)userAgentString;
- (void)awakeFromNib;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)acceptUserAgentString:(id)a0;
- (void)cancelUserAgentString:(id)a0;
- (id)initWithUserAgentString:(id)a0;
- (void)updateAcceptButton;

@end
