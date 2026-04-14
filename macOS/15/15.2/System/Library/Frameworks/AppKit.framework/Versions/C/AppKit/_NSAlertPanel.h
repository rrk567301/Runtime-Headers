@class NSView;

@interface _NSAlertPanel : NSPanel

@property (weak) NSView *clientInitialFirstResponder;
@property (weak) NSView *fallbackInitialFirstResponder;

- (void).cxx_destruct;
- (void)_selectFirstKeyView;
- (void)_setAlertWindow:(BOOL)a0;
- (void)setInitialFirstResponder:(id)a0;

@end
