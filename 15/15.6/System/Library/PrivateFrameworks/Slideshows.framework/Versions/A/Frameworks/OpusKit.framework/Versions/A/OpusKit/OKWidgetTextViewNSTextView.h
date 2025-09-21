@class OKWidgetTextView;

@interface OKWidgetTextViewNSTextView : NSTextView

@property (nonatomic) OKWidgetTextView *widgetTextView;

- (char)becomeFirstResponder;
- (void)didChangeText;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (char)resignFirstResponder;
- (char)wantsDefaultClipping;
- (struct CGImage { } *)_createTextImage;

@end
