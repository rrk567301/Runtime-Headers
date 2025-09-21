@interface QCTextView : NSTextView

+ (id)sharedInstance;

- (void)keyDown:(id)a0;
- (char)performKeyEquivalent:(id)a0;
- (char)validateMenuItem:(id)a0;
- (void)_windowDidResignKeyNotification:(id)a0;

@end
