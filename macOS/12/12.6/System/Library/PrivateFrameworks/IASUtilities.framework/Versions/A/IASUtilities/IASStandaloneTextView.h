@class IASFirstResponderDisablingTextView;

@interface IASStandaloneTextView : NSClipView

@property (retain) IASFirstResponderDisablingTextView *textView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)awakeFromNib;

@end
