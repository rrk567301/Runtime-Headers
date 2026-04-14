@class OKWidgetTextView;

@interface OKWidgetTextViewNSTextView : NSTextView

@property (nonatomic) OKWidgetTextView *widgetTextView;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseEntered:(id)a0;
- (void)mouseDown:(id)a0;
- (void)didChangeText;
- (BOOL)wantsDefaultClipping;
- (struct CGImage { } *)_createTextImage;

@end
