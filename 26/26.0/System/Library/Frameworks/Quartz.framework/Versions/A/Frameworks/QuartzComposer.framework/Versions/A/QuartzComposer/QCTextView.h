@interface QCTextView : NSTextView

+ (id)sharedInstance;

- (BOOL)validateMenuItem:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_windowDidResignKeyNotification:(id)a0;

@end
