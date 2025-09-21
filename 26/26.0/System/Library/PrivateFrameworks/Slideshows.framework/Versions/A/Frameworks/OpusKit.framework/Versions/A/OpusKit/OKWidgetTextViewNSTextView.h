@class OKWidgetTextView;

@interface OKWidgetTextViewNSTextView : NSTextView

@property (nonatomic) OKWidgetTextView *widgetTextView;

- (void)mouseDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseEntered:(id)a0;
- (void)didChangeText;
- (BOOL)wantsDefaultClipping;
- (struct CGImage { } *)_createTextImage;

@end
