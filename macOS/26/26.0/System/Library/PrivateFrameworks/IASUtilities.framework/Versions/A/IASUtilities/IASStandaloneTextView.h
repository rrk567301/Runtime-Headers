@class IASFirstResponderDisablingTextView;

@interface IASStandaloneTextView : NSClipView

@property (retain) IASFirstResponderDisablingTextView *textView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
