@class NSWindow;

@interface NSTitleTextFieldCell : NSTextFieldCell

@property (weak) NSWindow *window;

- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)_shouldUseStyledTextInView:(id)a0 withBackgroundStyle:(long long)a1;
- (id)_textFieldContentStyleInView:(id)a0 withBackgroundStyle:(long long)a1;
- (id)initTextCell:(id)a0 window:(id)a1;

@end
