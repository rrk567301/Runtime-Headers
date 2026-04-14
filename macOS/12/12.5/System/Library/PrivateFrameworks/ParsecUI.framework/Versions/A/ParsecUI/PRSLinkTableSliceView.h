@class NSTextView, NSLayoutConstraint;

@interface PRSLinkTableSliceView : NSView

@property NSTextView *textView;
@property NSLayoutConstraint *textViewMinHeightConstraint;
@property NSLayoutConstraint *textViewAdditionalHeightConstraint;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
