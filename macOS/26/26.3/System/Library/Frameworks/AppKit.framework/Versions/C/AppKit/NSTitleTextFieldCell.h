@class NSWindow;

@interface NSTitleTextFieldCell : NSTextFieldCell

@property (weak) NSWindow *window;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)_shouldUseStyledTextInView:(id)a0 withBackgroundStyle:(long long)a1;
- (id)_textFieldContentStyleInView:(id)a0 withBackgroundStyle:(long long)a1;
- (id)initTextCell:(id)a0 window:(id)a1;

@end
