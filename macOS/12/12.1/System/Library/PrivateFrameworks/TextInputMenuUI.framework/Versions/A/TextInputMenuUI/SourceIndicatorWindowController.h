@interface SourceIndicatorWindowController : NSWindowController

+ (id)newSourceIndicatorWindowController;

- (void)dealloc;
- (void)_showSourceIndicator;
- (void)_hideSourceIndicator;
- (void)handleUIServerMessage:(int)a0 withInfo:(id)a1;

@end
