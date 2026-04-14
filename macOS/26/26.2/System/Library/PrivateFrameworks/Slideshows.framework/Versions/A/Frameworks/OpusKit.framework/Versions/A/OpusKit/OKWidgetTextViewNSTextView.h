@class OKWidgetTextView;

@interface OKWidgetTextViewNSTextView : NSTextView

@property (nonatomic) OKWidgetTextView *widgetTextView;

- (void)mouseEntered:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)didChangeText;
- (BOOL)wantsDefaultClipping;
- (struct CGImage { } *)_createTextImage;

@end
